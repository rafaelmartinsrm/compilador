#include "../util/tabela_simbolos.h"
#include "../util/ast.h"
#include "../configuracoes.h"
#include "tac.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void tac(NoAST *raiz)
{
    FILE* arquivo = fopen("saida/saida.tac", "w");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o saida.tac\n");
        return;
    }
    fclose(arquivo);

    declaracoes_tac();
    expressoes_tac(raiz);
}

void nova_entrada(const char* entrada)
{
    FILE* arquivo = fopen("saida/saida.tac", "a");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o saida.tac\n");
        return;
    }

    fprintf(arquivo, entrada);
    fclose(arquivo);
}

void declaracoes_tac_recursivo(Escopo* escopo)
{
    if(!escopo)
        return;

    char entrada[256];
    Simbolo *simbolo, *tmp;
    while(escopo)
    {
        HASH_ITER(hh, escopo->tabela_hash, simbolo, tmp)
        {
            if(simbolo->tag == CONSTANTE)
            {
                if(simbolo->constante.tipo_dado == TIPO_INTEIRO || simbolo->constante.tipo_dado == TIPO_PONTO_FLUTUANTE)
                {
                    sprintf(entrada, "%s %s_%p\n", tipo_texto(simbolo->constante.tipo_dado), simbolo->identificador, simbolo->identificador);
                    nova_entrada(entrada);
                }
            }
        }
        if(escopo->proximo)
            declaracoes_tac_recursivo(escopo->proximo);
        
        escopo = escopo->filho;
    }
}

int tmps = -1;
int if_no = 0, for_no = 0;
char* alocar_tmp()
{
    tmps += 1;
    int digits = (tmps == 0) ? 1 : (int)floor(log10(abs(tmps))) + 1;
    int size = digits + 2; // $ + digitos + \0

    char *str = (char *) malloc(size);
    
    sprintf(str, "$%d", tmps);

    return str;
}

void expressoes_tac_recursivo(NoAST *no)
{
    int i;
    char comando[256], reg[256];
    if(!no)
        return;
    switch(no->tipo)
    {
        case(NO_DECLARACOES):
        {
            NoAST_Declaracoes* no_declaracoes = (NoAST_Declaracoes *) no;
            for(i = 0; i < no_declaracoes->declaracoes_no; ++i)
            {
                expressoes_tac_recursivo(no_declaracoes->declaracoes[i]);
            }
            break;
        }
        case(NO_ARITMETICA):
        {
            NoAST_Aritmetica* no_aritmetica = (NoAST_Aritmetica *) no;
            expressoes_tac_recursivo(no_aritmetica->esquerda);   
            expressoes_tac_recursivo(no_aritmetica->direita);   
            no_aritmetica->reg = alocar_tmp();
            switch(no_aritmetica->operador)
            {
                case(ADD):
                    sprintf(comando, "add %s, %s, %s\n", no_aritmetica->reg, no_aritmetica->esquerda->reg, no_aritmetica->direita->reg);
                    nova_entrada(comando);
                    break;
                case(SOMA):
                    sprintf(comando, "add %s, %s, %s\n", no_aritmetica->reg, no_aritmetica->esquerda->reg, no_aritmetica->direita->reg);
                    nova_entrada(comando);
                    break;
                case(SUBTRACAO):
                    sprintf(comando, "sub %s, %s, %s\n", no_aritmetica->reg, no_aritmetica->esquerda->reg, no_aritmetica->direita->reg);
                    nova_entrada(comando);
                    break;
                case(MULTIPLICACAO):
                    sprintf(comando, "mul %s, %s, %s\n", no_aritmetica->reg, no_aritmetica->esquerda->reg, no_aritmetica->direita->reg);
                    nova_entrada(comando);
                    break;
            }
            break;
        }
        case(NO_PARAMETROS_CHAMADA):
        {
            NoAST_Parametros_Chamada* no_parametros_chamada = (NoAST_Parametros_Chamada *) no;
            for(i = 0; i < no_parametros_chamada->parametros_no; ++i)
            {
                expressoes_tac_recursivo(no_parametros_chamada->parametros[i]);
                sprintf(comando, "param %s\n", no_parametros_chamada->parametros[i]->reg);
                nova_entrada(comando);
            }
            break;
        }
        case(NO_PARAMETROS):
        {
            break;
        }
        case(NO_CHAMADA_FUNCAO):
        {
            NoAST_Chamada_Funcao* no_chamada_funcao = (NoAST_Chamada_Funcao *) no;
            expressoes_tac_recursivo(no_chamada_funcao->definicao);
            expressoes_tac_recursivo(no_chamada_funcao->parametros);
            Simbolo* simbolo = simbolo_no_ast(no_chamada_funcao->definicao);
            NoAST_Parametros_Chamada* no_parametros_chamada = (NoAST_Parametros_Chamada *) no_chamada_funcao->parametros;
            sprintf(comando, "call %s, %d\n", simbolo->identificador, no_parametros_chamada->parametros_no);
            nova_entrada(comando);
            sprintf(comando, "pop $0\n");
            nova_entrada(comando);
            break;
        }
        case(NO_CONJUNTO):
        {
            NoAST_Conjunto* no_conjunto = (NoAST_Conjunto *) no;
            expressoes_tac_recursivo(no_conjunto->esquerda);
            expressoes_tac_recursivo(no_conjunto->direita);
            break;
        }
        case(NO_DECLARACAO):
        {
            //NoAST_Declaracao* no_declaracao = (NoAST_Declaracao *) no;
            // Simbolos     
            break;
        }
        case(NO_CONSTANTE):
        {
            NoAST_Constante* no_constante = (NoAST_Constante *) no;
            switch(no_constante->tipo_dado)
            {
                case TIPO_INTEIRO:
                    no_constante->reg = alocar_tmp();
                    sprintf(comando, "mov %s, %d\n", no_constante->reg, no_constante->valor.intval);
                    nova_entrada(comando);
                    break;
            }
            // Valor 
            break;
        }
        case(NO_ELSEIF):
        {
            NoAST_ElseIf* no_elseif = (NoAST_ElseIf *) no;
            int i = 0, atual = 0, ultimo = 0, proximo = 0;
            char *tempstr = calloc(strlen(no_elseif->reg)+1, sizeof(char));
            strcpy(tempstr, no_elseif->reg);
            char * token = strtok((char *)tempstr, "_");
            char *token_array[5];
            while(token != NULL)
            {
                token_array[i++] = token;
                token = strtok(NULL, "_");
            }
            atual = atoi(token_array[3]);
            ultimo = atoi(token_array[4]);

            printf("%s\n", no_elseif->reg);
            sprintf(comando, "%s:\n", no_elseif->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_elseif->condicao);
            sprintf(comando, "brnz bloco%s, %s\n", no_elseif->reg, no_elseif->condicao->reg);
            nova_entrada(comando);
            if(atual != 0)
            {
                sprintf(comando, "jump %s_%s_%s_%d_%d\n", token_array[0], token_array[1], token_array[2], atual-1, ultimo);
                nova_entrada(comando);
            }
            else
            {
                sprintf(comando, "jump %s_%s_blocoelse\n", token_array[0], token_array[1]);
                nova_entrada(comando);
            }
            sprintf(comando, "bloco%s:\n", no_elseif->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_elseif->bloco_elseif);
            free(tempstr);
            break;
        }
        case(NO_RETORNO):
        {
            NoAST_Retorno* no_retorno = (NoAST_Retorno *) no;
            expressoes_tac_recursivo(no_retorno->referencia);
            sprintf(comando, "return %s\n", no_retorno->referencia->reg);
            nova_entrada(comando);
            break;
        }
        case(NO_REFERENCIA):
        {
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no;
            // Concat identificador e endereço
            char str1[256];
            if(no_referencia->definicao->tag == PARAMETRO)
                sprintf(str1, "%s", no_referencia->definicao->reg);
            else
                sprintf(str1, "%s_%p", no_referencia->definicao->identificador, no_referencia->definicao->identificador);

            no_referencia->reg = strdup(str1);
            break;
        }
        case(NO_RELACIONAL):
        {
            NoAST_Relacional* no_relacional = (NoAST_Relacional *) no;
            expressoes_tac_recursivo(no_relacional->esquerda);
            expressoes_tac_recursivo(no_relacional->direita);
            no_relacional->reg = alocar_tmp();
            switch(no_relacional->operador)
            {
                case MENOR_QUE:
                    sprintf(comando, "slt %s, %s, %s\n", no_relacional->reg, no_relacional->esquerda->reg, no_relacional->direita->reg);
                    break;
                case MAIOR_QUE:
                    sprintf(comando, "slt %s, %s, %s\n", no_relacional->reg, no_relacional->direita->reg, no_relacional->esquerda->reg);
                    break;

            }
            nova_entrada(comando);
            break;
        }
        case(NO_FOR):
        {
            NoAST_For* no_for = (NoAST_For *) no;
            sprintf(reg, "for_%d", for_no);
            no_for->reg = strdup(reg);
            for_no += 1;
            sprintf(comando, "%s:\n", no_for->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_for->inicializacao);
            sprintf(comando, "%s_condicao:\n", no_for->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_for->condicao);
            sprintf(comando, "brnz %s_bloco, %s\n", no_for->reg, no_for->condicao->reg);
            nova_entrada(comando);
            sprintf(comando, "jump end%s\n", no_for->reg);
            nova_entrada(comando);
            sprintf(comando, "%s_expressao:\n", no_for->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_for->expressao);
            sprintf(comando, "jump %s_condicao\n", no_for->reg);
            nova_entrada(comando);
            sprintf(comando, "%s_bloco:\n", no_for->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_for->bloco_for);
            sprintf(comando, "jump %s_expressao\n", no_for->reg);
            nova_entrada(comando);
            sprintf(comando, "end%s:\n", no_for->reg);
            nova_entrada(comando);
            break;
        }
        case(NO_IF):
        {
            NoAST_If* no_if = (NoAST_If *) no;
            sprintf(reg, "if_%d", if_no);
            no_if->reg = strdup(reg);
            sprintf(comando, "%s:\n", no_if->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_if->condicao);
            sprintf(comando, "brnz bloco%s, %s\n", no_if->reg, no_if->condicao->reg);
            nova_entrada(comando);
            if_no += 1;

            if(no_if->elseif_no)
            {
                sprintf(comando, "jump %s_elseif_%d_%d\n", no_if->reg, (no_if->elseif_no)-1, (no_if->elseif_no)-1);
                nova_entrada(comando);
            }
            else
            {
                sprintf(comando, "jump %s_blocoelse\n", no_if->reg);
                nova_entrada(comando);
            }

            sprintf(comando, "bloco%s:\n", no_if->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_if->bloco_if);
            sprintf(comando, "jump end%s\n", no_if->reg);
            nova_entrada(comando);

            for(i = 0; i < no_if->elseif_no; ++i)
            {
                sprintf(reg, "%s_elseif_%d_%d", no_if->reg, i, (no_if->elseif_no)-1);
                no_if->blocos_elseif[i]->reg = strdup(reg);
                expressoes_tac_recursivo(no_if->blocos_elseif[i]);
                sprintf(comando, "jump end%s\n", no_if->reg);
                nova_entrada(comando);
            }
            sprintf(comando, "%s_blocoelse:\n", no_if->reg);
            nova_entrada(comando);
            expressoes_tac_recursivo(no_if->bloco_else);
            sprintf(comando, "jump end%s\n", no_if->reg);
            nova_entrada(comando);
            sprintf(comando, "end%s:\n", no_if->reg);
            nova_entrada(comando);
            break;
        }
        case(NO_EXPRESSAO_COMPOSTA):
        {
            NoAST_Expressao_Composta* no_expressao_composta = (NoAST_Expressao_Composta *) no;
            for(i = 0; i < no_expressao_composta->itens_bloco_no; ++i)
            {
                expressoes_tac_recursivo(no_expressao_composta->itens_bloco[i]); 
            }
            break;
        }
        case(NO_DECLARACAO_FUNCAO):
        {
            NoAST_Declaracao_Funcao* no_declaracao_funcao = (NoAST_Declaracao_Funcao *) no;
            Parametro* parametro = no_declaracao_funcao->definicao->funcao.parametros;
            // Simbolo?
            sprintf(comando, "%s:\n", no_declaracao_funcao->definicao->identificador);
            nova_entrada(comando);
            if(parametro)
            {
                i = 0;
                while(parametro)
                {
                    char str1[256];
                    sprintf(str1, "#%d", i);
                    parametro->simbolo->reg = strdup(str1);
                    parametro = parametro->proximo;
                }
            }
            expressoes_tac_recursivo(no_declaracao_funcao->expressao_composta);
            break;
        }
        case(NO_ATRIBUICAO):
        {
            NoAST_Atribuicao* no_atribuicao = (NoAST_Atribuicao *) no;
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no_atribuicao->referencia;
            expressoes_tac_recursivo(no_atribuicao->referencia);
            expressoes_tac_recursivo(no_atribuicao->constante);
            //no_aritmetica->reg = alocar_tmp();
            sprintf(comando, "mov %s_%p, %s\n", no_referencia->definicao->identificador, no_referencia->definicao->identificador, no_atribuicao->constante->reg);
            nova_entrada(comando);
            break;
        }
        case(NO_IO):
        {
            NoAST_IO* no_io = (NoAST_IO *) no;
            expressoes_tac_recursivo(no_io->expressao);
            switch(no_io->tipo_io)
            {
                case IO_WRITELN:
                    sprintf(comando, "println %s\n", no_io->expressao->reg);
                    break;
                case IO_WRITE:
                    sprintf(comando, "print %s\n", no_io->expressao->reg);
                    break;
                case IO_READ:
                    sprintf(comando, "read %s\n", no_io->expressao->reg);
                    break;
                default:
                    printf("[ERRO] Não reconhece esse tipo IO.\n");
                    break;
            }
            nova_entrada(comando);
            break;
        }
        case(NO_OPERACAO):
        {
            NoAST_Operacao* no_operacao = (NoAST_Operacao *) no;
            expressoes_tac_recursivo(no_operacao->referencia);
            break;
        }
        default:
            printf("Não considera o tipo: \"%d\"\n", no->tipo);
            break;
    }
}

void expressoes_tac(NoAST *raiz)
{
    nova_entrada(".code\n");
    
    expressoes_tac_recursivo(raiz);
}

void declaracoes_tac()
{
    nova_entrada(".table\n");
    Escopo* escopo = escopo_atual();

    while(escopo->pai != NULL)
        escopo = escopo->pai;

    declaracoes_tac_recursivo(escopo);
}

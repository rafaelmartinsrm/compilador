#include "../util/tabela_simbolos.h"
#include "../util/ast.h"
#include "../configuracoes.h"
#include "tac.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "string.h"

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
    char comando[256];
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
            sprintf(comando, "mul %s, %s, %s\n", no_aritmetica->reg, no_aritmetica->esquerda->reg, no_aritmetica->direita->reg);
            nova_entrada(comando);
            break;
        }
        case(NO_PARAMETROS_CHAMADA):
        {
            NoAST_Parametros_Chamada* no_parametros_chamada = (NoAST_Parametros_Chamada *) no;
            for(i = 0; i < no_parametros_chamada->parametros_no; ++i)
            {
                expressoes_tac_recursivo(no_parametros_chamada->parametros[i]);
            }
            break;
        }
        case(NO_PARAMETROS):
        {
            NoAST_Parametros* no_parametros = (NoAST_Parametros *) no;
            break;
        }
        case(NO_CHAMADA_FUNCAO):
        {
            NoAST_Chamada_Funcao* no_chamada_funcao = (NoAST_Chamada_Funcao *) no;
            expressoes_tac_recursivo(no_chamada_funcao->definicao);
            expressoes_tac_recursivo(no_chamada_funcao->parametros);
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
            NoAST_Declaracao* no_declaracao = (NoAST_Declaracao *) no;
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
            expressoes_tac_recursivo(no_elseif->condicao);
            expressoes_tac_recursivo(no_elseif->bloco_elseif);
            break;
        }
        case(NO_RETORNO):
        {
            NoAST_Retorno* no_retorno = (NoAST_Retorno *) no;
            expressoes_tac_recursivo(no_retorno->referencia);
            break;
        }
        case(NO_REFERENCIA):
        {
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no;
            // Concat identificador e endereço
            char str1[256];
            sprintf(str1, "%s_%p", no_referencia->definicao->identificador, no_referencia->definicao->identificador);

            no_referencia->reg = strdup(str1);
            break;
        }
        case(NO_RELACIONAL):
        {
            NoAST_Relacional* no_relacional = (NoAST_Relacional *) no;
            expressoes_tac_recursivo(no_relacional->esquerda);
            expressoes_tac_recursivo(no_relacional->direita);
            break;
        }
        case(NO_IF):
        {
            NoAST_If* no_if = (NoAST_If *) no;
            expressoes_tac_recursivo(no_if->condicao);
            expressoes_tac_recursivo(no_if->bloco_if);

            for(i = 0; i < no_if->elseif_no; ++i)
            {
                expressoes_tac_recursivo(no_if->blocos_elseif[i]);
            }
            expressoes_tac_recursivo(no_if->bloco_else);
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
                    sprintf(comando, "mov %s_%p, #%d\n", parametro->identificador, parametro->identificador, i);
                    nova_entrada(comando);
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

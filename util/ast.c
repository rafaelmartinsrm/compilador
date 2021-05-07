#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../configuracoes.h"
#include "tabela_simbolos.h"
#include "ast.h"

NoAST *novo_no_ast(TipoNo tipo, NoAST *esquerda, NoAST *direita)
{
    NoAST *no = malloc(sizeof(NoAST));

    no->tipo = tipo;
    no->esquerda = esquerda;
    no->direita = direita;

    return no;
}

NoAST *novo_no_ast_parametros(NoAST *no, int parametros_no, Simbolo *parametro)
{
    NoAST_Parametros *novo_no = NULL;
    if(no == NULL)
    {
        novo_no = malloc(sizeof(NoAST_Parametros));
        novo_no->tipo = NO_PARAMETROS;
        novo_no->parametros = NULL;
    }
    else
    {
        novo_no = (NoAST_Parametros *) no;
    }

    Parametro* novo_parametro = malloc(sizeof(Parametro));
    novo_parametro->identificador = parametro->identificador;
    novo_parametro->simbolo = parametro;
    novo_parametro->tipo_dado = parametro->funcao.tipo_dado;
    novo_parametro->proximo = NULL;

    if(novo_no->parametros == NULL)
    {
        novo_no->parametros = novo_parametro;
        novo_no->parametros_no = 1;
    }
    else
    {
        Parametro *temp_parametro = novo_no->parametros;

        novo_no->parametros_no = parametros_no + 1;
        
        while(temp_parametro->proximo != NULL)
            temp_parametro = temp_parametro->proximo;
        temp_parametro->proximo = novo_parametro;
    }

    return (struct NoAST*) novo_no;
}
    
NoAST *novo_no_ast_atribuicao(NoAST *referencia, NoAST *constante)
{
    NoAST_Atribuicao *novo_no = malloc(sizeof(NoAST_Atribuicao));
    novo_no->tipo = NO_ATRIBUICAO;
    novo_no->referencia = referencia;
    novo_no->constante = constante;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_expressao_composta(NoAST *no, int itens_bloco_no, NoAST *item)
{
    NoAST_Expressao_Composta *novo_no = NULL;

    if(no == NULL)
    {
        novo_no = malloc(sizeof(NoAST_Expressao_Composta));
        novo_no->tipo = NO_EXPRESSAO_COMPOSTA;
        novo_no->itens_bloco = NULL;
    }
    else
    {
        novo_no = (NoAST_Expressao_Composta *) no;
    }

    if(novo_no->itens_bloco == NULL)
    {
        novo_no->itens_bloco = (NoAST**)malloc(sizeof(NoAST*));
        novo_no->itens_bloco_no = 1;
    }
    else
    {
        novo_no->itens_bloco_no = itens_bloco_no + 1;
        novo_no->itens_bloco = (NoAST**)realloc(novo_no->itens_bloco, novo_no->itens_bloco_no * sizeof(NoAST*));
    }
    novo_no->itens_bloco[novo_no->itens_bloco_no - 1] = item;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_referencia(Simbolo *definicao)
{
    NoAST_Referencia *novo_no = malloc(sizeof(NoAST_Referencia));
    novo_no->tipo = NO_REFERENCIA;
    novo_no->reg = NULL;
    novo_no->definicao = definicao;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_relacional(Operador operador, NoAST *esquerda, NoAST *direita)
{
    NoAST_Relacional *novo_no = malloc(sizeof(NoAST_Relacional));
    novo_no->tipo = NO_RELACIONAL;
    novo_no->operador = operador;
    novo_no->esquerda = esquerda;
    novo_no->direita = direita;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_conjunto(Operador operador, NoAST *esquerda, NoAST *direita)
{
    NoAST_Conjunto *novo_no = malloc(sizeof(NoAST_Conjunto));
    novo_no->tipo = NO_CONJUNTO;
    novo_no->operador = operador;
    novo_no->esquerda = esquerda;
    novo_no->direita = direita;

    return (struct NoAST*) novo_no;
}


NoAST *novo_no_ast_aritmetica(Operador operador, NoAST *esquerda, NoAST *direita)
{
    NoAST_Aritmetica *novo_no = malloc(sizeof(NoAST_Aritmetica));
    novo_no->tipo = NO_ARITMETICA;
    novo_no->operador = operador;
    novo_no->esquerda = esquerda;
    novo_no->direita = direita;

    return (struct NoAST*) novo_no;
}


NoAST *novo_no_ast_if(NoAST *condicao, NoAST *bloco_if, NoAST **blocos_elseif, int elseif_no, NoAST *bloco_else)
{
    NoAST_If *novo_no = malloc(sizeof(NoAST_If));

    novo_no->tipo = NO_IF;
    novo_no->condicao = condicao;
    novo_no->bloco_if = bloco_if;
    novo_no->blocos_elseif = blocos_elseif;
    novo_no->elseif_no = elseif_no;
    novo_no->bloco_else = bloco_else;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_declaracoes(NoAST *no, int declaracoes_no, NoAST *declaracao)
{
    NoAST_Declaracoes *novo_no = NULL;
    if(no == NULL)
    {
        novo_no = malloc(sizeof(NoAST_Declaracoes));
        novo_no->tipo = NO_DECLARACOES;
        novo_no->declaracoes = NULL;
    }
    else
    {
        novo_no = (NoAST_Declaracoes *) no;
    }

    if(novo_no->declaracoes == NULL)
    {
        novo_no->declaracoes = (NoAST**)malloc(sizeof(NoAST*));
        novo_no->declaracoes_no = 1;
    }
    else
    {
        novo_no->declaracoes_no = declaracoes_no + 1;
        novo_no->declaracoes = (NoAST**)realloc(novo_no->declaracoes, novo_no->declaracoes_no * sizeof(NoAST*));
    }

    novo_no->declaracoes[novo_no->declaracoes_no - 1] = declaracao;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_declaracao_funcao(int tipo_dado, Simbolo *simbolo, NoAST *expressao_composta)
{
    NoAST_Declaracao_Funcao *novo_no = malloc(sizeof(NoAST_Declaracao_Funcao));

    novo_no->tipo = NO_DECLARACAO_FUNCAO;
    novo_no->tipo_dado = tipo_dado;
    novo_no->definicao = simbolo;
    novo_no->expressao_composta = expressao_composta;

    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_chamada_funcao(NoAST *definicao, NoAST *parametros, int parametros_no)
{
    NoAST_Chamada_Funcao *novo_no = malloc(sizeof(NoAST_Chamada_Funcao));

    novo_no->tipo = NO_CHAMADA_FUNCAO;
    novo_no->definicao = definicao;
    novo_no->parametros = parametros;
    novo_no->parametros_no = parametros_no;
    
    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_parametros_chamada(NoAST *no, int parametros_no, NoAST *parametro)
{
    NoAST_Parametros_Chamada *novo_no = NULL;
    if(no == NULL)
    {
        novo_no = malloc(sizeof(NoAST_Parametros_Chamada));
        novo_no->tipo = NO_PARAMETROS_CHAMADA;
        novo_no->parametros = NULL;
    }
    else
    {
        novo_no = (NoAST_Parametros_Chamada *) no;
    }

    if(novo_no->parametros == NULL)
    {
        novo_no->parametros = (NoAST**)malloc(sizeof(NoAST*));
        novo_no->parametros_no = 1;
    }
    else
    {
        novo_no->parametros_no = parametros_no + 1;
        novo_no->parametros = (NoAST**)realloc(novo_no->parametros, novo_no->parametros_no * sizeof(NoAST*));
    }

    novo_no->parametros[novo_no->parametros_no - 1] = parametro;
    return (struct NoAST*) novo_no;
}

NoAST *novo_no_ast_declaracao(int tipo_dado, Simbolo **simbolos, int simbolos_no)
{
    NoAST_Declaracao *no = malloc(sizeof(NoAST_Declaracao));

    no->tipo = NO_DECLARACAO;
    no->tipo_dado = tipo_dado;
    no->simbolos = simbolos;
    no->simbolos_no = simbolos_no;

    return (struct NoAST*) no;
}

NoAST *novo_no_ast_operacao(int operador, NoAST *referencia)
{
    NoAST_Operacao *no = malloc(sizeof(NoAST_Operacao));

    no->tipo = NO_OPERACAO;
    no->operador = operador;
    no->referencia = referencia;

    return (struct NoAST*) no;
}

NoAST *novo_no_ast_constante(int tipo_constante, Valor valor)
{
    NoAST_Constante *no = malloc(sizeof(NoAST_Constante));
    
    no->tipo = NO_CONSTANTE;
    no->reg = NULL;
    no->tipo_dado = tipo_constante;
    no->valor = valor;

    return (struct NoAST*) no;
}

NoAST *novo_no_ast_retorno(NoAST *referencia)
{
    NoAST_Retorno *no = malloc(sizeof(NoAST_Retorno));
    no->tipo = NO_RETORNO;
    no->referencia = referencia;

    return (struct NoAST*) no;
}

NoAST *novo_no_ast_elseif(NoAST *condicao, NoAST *bloco_elseif)
{
    NoAST_ElseIf *no = malloc(sizeof(NoAST_ElseIf));
    no->tipo = NO_ELSEIF;
    no->condicao = condicao;
    no->bloco_elseif = bloco_elseif;

    return (struct NoAST*) no;
}

NoAST *novo_no_ast_io(NoAST *expressao, int tipo_io)
{
    NoAST_IO *no = malloc(sizeof(NoAST_IO));
    no->tipo = NO_IO;
    no->tipo_io = tipo_io;
    no->expressao = expressao;
    
    return (struct NoAST*) no;
}

Simbolo *simbolo_no_ast(NoAST *no)
{
    Simbolo *simbolo = NULL;
    switch(no->tipo)
    {
        case NO_CHAMADA_FUNCAO:
        {
            NoAST_Chamada_Funcao* no_chamada_funcao = (NoAST_Chamada_Funcao *) no;
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no_chamada_funcao->definicao;
            simbolo = no_referencia->definicao;
            break;
        }
        case NO_REFERENCIA:
        {
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no;
            simbolo = no_referencia->definicao;
            break;
        }
        default:
        {
            printf("[ERRO] Não foi possível encontrar o simbolo para o tipo %d.\n", no->tipo);
            return NULL;
        }
    }
    return simbolo;
}

int erro_tipos(int operacao, int tipo1, int tipo2)
{
    printf("[ERRO] Erro na operação %d com tipos %s e %s\n", operacao, tipo_texto(tipo1), tipo_texto(tipo2));
    return -1;
}

void adicionar_erro(const char* texto)
{
    FILE* arquivo = fopen("saida/erros.txt", "a");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o arquivo.txt\n");
        return;
    }

    fprintf(arquivo, texto);
    fclose(arquivo);

    return;
}

int tipo_resultado_expressao(int operacao, int tipo1, int tipo2)
{
    if(tipo1 == TIPO_INDEFINIDO || tipo2 == TIPO_INDEFINIDO)
        return erro_tipos(operacao, tipo1, tipo2);

    if(operacao == SOMA || operacao == SUBTRACAO)
    {
        if(tipo1 == TIPO_INTEIRO)
        {
            if(tipo2 == TIPO_INTEIRO)
                return TIPO_INTEIRO;
            else if(tipo2 == TIPO_PONTO_FLUTUANTE)
                return TIPO_PONTO_FLUTUANTE;
            else
                return erro_tipos(operacao, tipo1, tipo2);
        }
        else if(tipo1 == TIPO_PONTO_FLUTUANTE)
        {
            if(tipo2 == TIPO_INTEIRO || tipo2 == TIPO_PONTO_FLUTUANTE)
                return TIPO_PONTO_FLUTUANTE;
            else
                return erro_tipos(operacao, tipo1, tipo2);
        }
        else if(tipo1 == TIPO_CONJUNTO)
        {
            if(tipo2 == TIPO_CONJUNTO)
                return TIPO_CONJUNTO;
            else
                return erro_tipos(operacao, tipo1, tipo2);
        }
    }
    else if(operacao == ADD || operacao == EXISTS || operacao == REMOVE)
    {
        if(tipo2 != TIPO_CONJUNTO)
            return erro_tipos(operacao, tipo1, tipo2);
        else
        {
            if(tipo1 == TIPO_CONJUNTO)
                return erro_tipos(operacao, tipo1, tipo2);
            else
                return TIPO_CONJUNTO;
        }
    }
    else if(operacao == MAIOR_QUE || operacao == IGUALDADE)
    {
        // Retorna 1 ou 0 < booleano mas inteiro
        return TIPO_INTEIRO;
    }

    return -1;
}

int tipo_parametros_funcao(Simbolo *simbolo, NoAST *no)
{
    char erro[256];
    NoAST_Parametros* no_parametros = (NoAST_Parametros *) no;
    if(simbolo->funcao.parametros_no != no_parametros->parametros_no)
    {
        sprintf(erro, "[ERRO] O número de parametros para '%s', %d é diferente do esperado (%d).\n", simbolo->identificador, no_parametros->parametros_no, simbolo->funcao.parametros_no);
        adicionar_erro(erro);
        return -1;
    }

    int i;
    for(i = 0; i < simbolo->funcao.parametros_no; ++i)
    {
        if(simbolo->funcao.parametros[i].tipo_dado != no_parametros->parametros[i].tipo_dado)
        {
            sprintf(erro, "[ERRO] O tipo %s do parametro %d é diferente do esperado (%s) para a função '%s'.\n", tipo_texto(no_parametros->parametros[i].tipo_dado), i, tipo_texto(simbolo->funcao.parametros[i].tipo_dado), simbolo->identificador);
            adicionar_erro(erro);
            return -1;
        }
    }
    return 1;
}

void liberar_ast(NoAST *no)
{
    if(no == NULL)
        return;

    int i;

    switch(no->tipo)
    {
        case(NO_DECLARACOES):
        {
            NoAST_Declaracoes* no_declaracoes = (NoAST_Declaracoes *) no;
            for(i = 0; i < no_declaracoes->declaracoes_no; ++i)
            {
                liberar_ast(no_declaracoes->declaracoes[i]);
            }
            free(no_declaracoes->declaracoes);
            free(no_declaracoes);
            break;
        }
        case(NO_ARITMETICA):
        {
            NoAST_Aritmetica* no_aritmetica = (NoAST_Aritmetica *) no;
            liberar_ast(no_aritmetica->esquerda);   
            liberar_ast(no_aritmetica->direita);   
            if(no_aritmetica->reg)
                free((char*)no_aritmetica->reg);
            free(no_aritmetica);
            break;
        }
        case(NO_PARAMETROS_CHAMADA):
        {
            NoAST_Parametros_Chamada* no_parametros_chamada = (NoAST_Parametros_Chamada *) no;
            for(i = 0; i < no_parametros_chamada->parametros_no; ++i)
            {
                liberar_ast(no_parametros_chamada->parametros[i]);
                // Simbolo liberado pela tabela
                //free(no_parametros_chamada->parametros[i]);
            }
            free(no_parametros_chamada->parametros);
            free(no_parametros_chamada);
            break;
        }
        case(NO_PARAMETROS):
        {
            NoAST_Parametros* no_parametros = (NoAST_Parametros *) no;
            free(no_parametros);
            break;
        }
        case(NO_CHAMADA_FUNCAO):
        {
            NoAST_Chamada_Funcao* no_chamada_funcao = (NoAST_Chamada_Funcao *) no;
            liberar_ast(no_chamada_funcao->definicao);
            liberar_ast(no_chamada_funcao->parametros);
            free(no_chamada_funcao);
            break;
        }
        case(NO_CONJUNTO):
        {
            NoAST_Conjunto* no_conjunto = (NoAST_Conjunto *) no;
            liberar_ast(no_conjunto->esquerda);
            liberar_ast(no_conjunto->direita);
            free(no_conjunto);
            break;
        }
        case(NO_DECLARACAO):
        {
            NoAST_Declaracao* no_declaracao = (NoAST_Declaracao *) no;
            // Simbolos     
            free(no_declaracao->simbolos);
            free(no_declaracao);
            break;
        }
        case(NO_CONSTANTE):
        {
            NoAST_Constante* no_constante = (NoAST_Constante *) no;
            // Valor 
            if(no_constante->tipo_dado == TIPO_CADEIA)
                free(no_constante->valor.stringval);
            if(no_constante->reg)
                free((char*)no_constante->reg);
            free(no_constante);
            break;
        }
        case(NO_ELSEIF):
        {
            NoAST_ElseIf* no_elseif = (NoAST_ElseIf *) no;
            liberar_ast(no_elseif->condicao);
            liberar_ast(no_elseif->bloco_elseif);
            free(no_elseif);
            break;
        }
        case(NO_RETORNO):
        {
            NoAST_Retorno* no_retorno = (NoAST_Retorno *) no;
            liberar_ast(no_retorno->referencia);
            free(no_retorno);
            break;
        }
        case(NO_REFERENCIA):
        {
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no;
            // Simbolo
            if(no_referencia->reg)
                free((char*)no_referencia->reg);
            free(no_referencia);
            break;
        }
        case(NO_RELACIONAL):
        {
            NoAST_Relacional* no_relacional = (NoAST_Relacional *) no;
            liberar_ast(no_relacional->esquerda);
            liberar_ast(no_relacional->direita);
            free(no_relacional);
            break;
        }
        case(NO_IF):
        {
            NoAST_If* no_if = (NoAST_If *) no;
            liberar_ast(no_if->condicao);
            liberar_ast(no_if->bloco_if);

            for(i = 0; i < no_if->elseif_no; ++i)
            {
                liberar_ast(no_if->blocos_elseif[i]);
            }
            free(no_if->blocos_elseif);
            liberar_ast(no_if->bloco_else);
            free(no_if);
            break;
        }
        case(NO_EXPRESSAO_COMPOSTA):
        {
            NoAST_Expressao_Composta* no_expressao_composta = (NoAST_Expressao_Composta *) no;
            for(i = 0; i < no_expressao_composta->itens_bloco_no; ++i)
            {
                liberar_ast(no_expressao_composta->itens_bloco[i]); 
            }
            free(no_expressao_composta->itens_bloco);
            free(no_expressao_composta); 
            break;
        }
        case(NO_DECLARACAO_FUNCAO):
        {
            NoAST_Declaracao_Funcao* no_declaracao_funcao = (NoAST_Declaracao_Funcao *) no;
            // Simbolo?
            liberar_ast(no_declaracao_funcao->expressao_composta);
            free(no_declaracao_funcao);
            break;
        }
        case(NO_ATRIBUICAO):
        {
            NoAST_Atribuicao* no_atribuicao = (NoAST_Atribuicao *) no;
            liberar_ast(no_atribuicao->referencia);
            liberar_ast(no_atribuicao->constante);
            free(no_atribuicao);
            break;
        }
        case(NO_IO):
        {
            NoAST_IO* no_io = (NoAST_IO *) no;
            liberar_ast(no_io->expressao);
            free(no_io);
            break;
        }
        case(NO_OPERACAO):
        {
            NoAST_Operacao* no_operacao = (NoAST_Operacao *) no;
            liberar_ast(no_operacao->referencia);
            free(no_operacao);
            break;
        }
        default:
        {
            printf("-\nNão sei liberar o tipo %d\n-", no->tipo);
            break;
        }
    }
}

int tipo_expressao(NoAST *no)
{
    char erro[256];
    switch(no->tipo)
    {
        case(NO_REFERENCIA):
        {
            NoAST_Referencia* no_referencia = (NoAST_Referencia *) no;
            if(no_referencia->definicao->tag == CONSTANTE)
                return no_referencia->definicao->constante.tipo_dado;
            else if(no_referencia->definicao->tag == FUNCAO)
                return no_referencia->definicao->funcao.tipo_dado;
            else
            {
                sprintf(erro, "[ERRO] Erro no nó de referência! %s não está bem definido.\n", no_referencia->definicao->identificador);  
                adicionar_erro(erro);
            }
            break;
        } 
        case(NO_CONSTANTE):
        {
            NoAST_Constante* no_constante = (NoAST_Constante *) no;
            return no_constante->tipo_dado;
            break;
        }
        case(NO_ARITMETICA):
        {
            NoAST_Aritmetica* no_aritmetica = (NoAST_Aritmetica *) no;
            return tipo_resultado_expressao(no_aritmetica->operador, tipo_expressao(no_aritmetica->esquerda), tipo_expressao(no_aritmetica->direita));
            break;
        }
        case(NO_RELACIONAL):
        {
            NoAST_Relacional* no_relacional = (NoAST_Relacional *) no;
            return tipo_resultado_expressao(no_relacional->operador, tipo_expressao(no_relacional->esquerda), tipo_expressao(no_relacional->direita));
            break;
        }
        case(NO_CHAMADA_FUNCAO):
        {
            Simbolo* simbolo = simbolo_no_ast(no);
            return simbolo->funcao.tipo_dado;
            break;
        }
        default:
            break;
    }

    return 0;
}

const char* operador_texto(int operador)
{
    switch(operador)
    {
        case E:
            return "&&";
            break;
        case OU:
            return "||";
            break;
        case INDEFINIDO:
            return "I";
            break;
        case MENOR_QUE:
            return "<";
            break;
        case MENOR_IGUAL:
            return "<=";
            break;
        case MAIOR_IGUAL:
            return ">=";
            break;
        case MAIOR_QUE:
            return ">";
            break;
        case IGUALDADE:
            return "==";
            break;
        case MULTIPLICACAO:
            return "*";
            break;
        case DIVISAO:
            return "/";
            break;
        case SOMA:
            return "+";
            break;
        case SUBTRACAO:
            return "-";
            break;
        case ADD:
            return "add";
            break;
        case REMOVE:
            return "remove";
            break;
        case EXISTS:
            return "exists";
            break;
        default:
            return "?";
            break;
    }
    return "";
}

const char* io_texto(int tipo)
{
    switch(tipo)
    {
        case IO_READ:
            return "read";
            break;
        case IO_WRITE:
            return "write";
            break;
        case IO_WRITELN:
            return "writeln";
            break;
        default:
            return "indef";
            break;
    }
}

void imprimir_no(NoAST *no, int espacamento)
{
    int i;
    if(no == NULL)
        return;

    switch(no->tipo)
    {
        case(NO_OPERACAO):
        {
            NoAST_Operacao *no_operacao = (NoAST_Operacao *) no;
            printf("%*c %s\n", espacamento, '*', operador_texto(no_operacao->operador));
            espacamento += 1;
            imprimir_no(no_operacao->referencia, espacamento);
            espacamento -= 1;
            break;
        }
        case(NO_CONJUNTO):
        {
            NoAST_Conjunto *no_conjunto = (NoAST_Conjunto *) no;
            printf("%*c %s\n", espacamento, '*', operador_texto(no_conjunto->operador));
            espacamento += 1;
            imprimir_no(no_conjunto->esquerda, espacamento);
            imprimir_no(no_conjunto->direita, espacamento);
            espacamento -= 1;
            break;    
        }
        case(NO_DECLARACAO):
        {
            int i;
            NoAST_Declaracao *no_declaracao = (NoAST_Declaracao *) no;
            printf("%*c declarações\n", espacamento, '*');
            espacamento += 1;
            printf("%*c %s\n", espacamento, '*', tipo_texto(no_declaracao->tipo_dado));
            espacamento += 1;
            for(i = 0; i < no_declaracao->simbolos_no; ++i)
            {
                printf("%*c %s\n", espacamento, '*', no_declaracao->simbolos[i]->identificador);
            }
            espacamento -= 1;
            espacamento -= 1;
            break;
        }
        case(NO_DECLARACAO_FUNCAO):
        {
            NoAST_Declaracao_Funcao *no_declaracao_funcao = (NoAST_Declaracao_Funcao *) no;
            printf("%*c declaração função\n", espacamento, '*');
            espacamento += 1;
            printf("%*c %s\n", espacamento, '*', tipo_texto(no_declaracao_funcao->tipo_dado));
            espacamento += 1;
            printf("%*c %s\n", espacamento, '*', no_declaracao_funcao->definicao->identificador);
            Parametro *parametros_tmp = no_declaracao_funcao->definicao->funcao.parametros;
            if(parametros_tmp)
            {
                espacamento += 1;
                printf("%*c %s\n", espacamento, '*', "parametros");
                espacamento += 1;
                for(; parametros_tmp != NULL; parametros_tmp = parametros_tmp->proximo)
                {
                    printf("%*c %s\n", espacamento, '*', parametros_tmp->identificador);
                }
                espacamento -= 1;
                espacamento -= 1;
            }
            printf("%*c %s\n", espacamento, '*', "expressão composta");
            espacamento += 1;
            imprimir_no(no_declaracao_funcao->expressao_composta, espacamento);
            espacamento -= 1;
            espacamento -= 1;
            espacamento -= 1;
            break;
        }
        case(NO_CHAMADA_FUNCAO):
        {
            NoAST_Chamada_Funcao *no_chamada_funcao = (NoAST_Chamada_Funcao *) no;
            printf("%*c %s\n", espacamento, '*', "chamada de função");
            espacamento += 1;
            imprimir_no(no_chamada_funcao->definicao, espacamento);
            espacamento += 1;
            printf("%*c %s\n", espacamento, '*', "parametros");
            espacamento += 1;
            imprimir_no(no_chamada_funcao->parametros, espacamento);
            espacamento -= 1;
            espacamento -= 1;
            espacamento -= 1;
            break;
        }
        case(NO_PARAMETROS_CHAMADA):
        {
            NoAST_Parametros_Chamada *no_parametros = (NoAST_Parametros_Chamada *) no;
            for(i = 0; i < no_parametros->parametros_no; ++i)
            {
                imprimir_no(no_parametros->parametros[i], espacamento);
            }
            break;
        }
        case(NO_REFERENCIA):
        {
            NoAST_Referencia *no_referencia = (NoAST_Referencia *) no;
            printf("%*c %s\n", espacamento, '*', no_referencia->definicao->identificador);

            break;
        }
        case(NO_ARITMETICA):
        {
            NoAST_Aritmetica *no_aritmetica = (NoAST_Aritmetica *) no;
            printf("%*c %s\n", espacamento, '*', operador_texto(no_aritmetica->operador));
            espacamento += 1;
            imprimir_no(no_aritmetica->esquerda, espacamento);
            imprimir_no(no_aritmetica->direita, espacamento);
            espacamento -= 1;
            break;

        }
        case(NO_RELACIONAL):
        {
            NoAST_Relacional *no_relacional = (NoAST_Relacional *) no;
            printf("%*c %s\n", espacamento, '*', operador_texto(no_relacional->operador));
            espacamento += 1;
            imprimir_no(no_relacional->esquerda, espacamento);
            imprimir_no(no_relacional->direita, espacamento);
            espacamento -= 1;
            break;

        }
        case(NO_CONSTANTE):
        {
            NoAST_Constante *no_constante = (NoAST_Constante *) no;
            printf("%*c %s", espacamento, '*', "constante\n");
            espacamento += 1;
            if(no_constante->tipo_dado == TIPO_INTEIRO)
                printf("%*c %d\n", espacamento, '*', no_constante->valor.intval);
            else if(no_constante->tipo_dado == TIPO_PONTO_FLUTUANTE)
                printf("%*c %f\n", espacamento, '*', no_constante->valor.floatval);
            else if(no_constante->tipo_dado == TIPO_CADEIA)
                printf("%*c %s\n", espacamento, '*', no_constante->valor.stringval);
            espacamento -= 1;
            break;
        }
        case(NO_ATRIBUICAO):
        {
            NoAST_Atribuicao *no_atribuicao = (NoAST_Atribuicao *) no;
            printf("%*c atribuição (=)\n", espacamento, '*');
            espacamento += 1;
            imprimir_no(no_atribuicao->referencia, espacamento);
            imprimir_no(no_atribuicao->constante, espacamento);
            espacamento -= 1;
            break;
        }
        case(NO_EXPRESSAO_COMPOSTA):
        {
            NoAST_Expressao_Composta *no_expressao = (NoAST_Expressao_Composta *) no;
            for(i = 0; i < no_expressao->itens_bloco_no; ++i)
            {
                imprimir_no(no_expressao->itens_bloco[i], espacamento);
            }
            break;
        }
        case(NO_IF):
        {
            NoAST_If *no_if = (NoAST_If *) no;
            printf("%*c %s", espacamento, '*', "if\n");
            espacamento += 1;
            printf("%*c %s", espacamento, '*', "condição\n");
            espacamento += 1;
            imprimir_no(no_if->condicao, espacamento);
            espacamento -= 1;
            printf("%*c %s", espacamento, '*', "bloco if\n");
            espacamento += 1;
            imprimir_no(no_if->bloco_if, espacamento);
            espacamento -= 1;
            if(no_if->elseif_no > 0)
            {
                printf("%*c %s", espacamento, '*', "blocos else if\n");
                espacamento += 1;
                for(i = 0; i < no_if->elseif_no; ++i)
                {
                    NoAST_ElseIf *no_elseif = (NoAST_ElseIf *) no_if->blocos_elseif[i];
                    printf("%*c %s", espacamento, '*', "condicao\n");
                    espacamento += 1;
                    imprimir_no(no_elseif->condicao, espacamento);
                    espacamento -= 1;
                    printf("%*c %s", espacamento, '*', "bloco else if\n");
                    espacamento += 1;
                    imprimir_no(no_elseif->bloco_elseif, espacamento);
                    espacamento -= 1;
                }
                espacamento -= 1;
            }
            if(no_if->bloco_else)
            {
                printf("%*c %s", espacamento, '*', "bloco else\n");
                espacamento += 1;
                imprimir_no(no_if->bloco_else, espacamento);
                espacamento -= 1;
            }
            break;
        }
        case(NO_RETORNO):
        {
            NoAST_Retorno *no_retorno = (NoAST_Retorno *) no;
            printf("%*c return\n", espacamento, '*');
            espacamento += 1;
            imprimir_no(no_retorno->referencia, espacamento);
            espacamento -= 1;
            break;
        }
        case(NO_IO):
        {
            NoAST_IO *no_io = (NoAST_IO *) no;
            printf("%*c I/O %s\n", espacamento, '*', io_texto(no_io->tipo_io));
            espacamento += 1;
            imprimir_no(no_io->expressao, espacamento);
            espacamento -= 1;
            break;
        }
        default:
            printf("[ERRO] Não foi criada regra para impressão de nó tipo %d.\n", no->tipo);
            break;
    }
}


#include "../util/tabela_simbolos.h"
#include "../configuracoes.h"
#include "tac.h"
#include <stdio.h>

void tac()
{
    FILE* arquivo = fopen("saida/saida.tac", "w");
    if(arquivo == NULL)
    {
        fprintf(stderr, "Erro ao abrir o saida.tac\n");
        return;
    }
    fclose(arquivo);

    declaracoes_tac();
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
                    sprintf(entrada, "%s %s\n", tipo_texto(simbolo->constante.tipo_dado), simbolo->identificador);
                    nova_entrada(entrada);
                }
            }
            else
                printf("nao eh constante\n");
        }
        if(escopo->proximo)
            declaracoes_tac_recursivo(escopo->proximo);
        
        escopo = escopo->filho;
    }
}

void declaracoes_tac()
{
    nova_entrada(".table\n");
    Escopo* escopo = escopo_atual();

    while(escopo->pai != NULL)
        escopo = escopo->pai;

    declaracoes_tac_recursivo(escopo);
}

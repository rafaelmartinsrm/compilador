#include "../util/tabela_simbolos.h"

char* alocar_tmp();
void tac(NoAST *raiz);
void nova_entrada(const char* entrada);
void declaracoes_tac();
void expressoes_tac(NoAST *raiz);
void expressoes_tac_recursivo(NoAST *no);
void declaracoes_tac_recursivo(Escopo* escopo);

OBJS 		= bison.o lexer.o
C_COMPILER	= gcc
C_FLAGS		= -g -Wall -lm 

clang:		$(OBJS)
			cd saida; \
	 		$(C_COMPILER) $(C_FLAGS) $(OBJS) ../util/tabela_simbolos.c ../util/ast.c ../tac/tac.c -o clang -lfl

lexer.o:	lexer.yy.c
			$(C_COMPILER) $(C_FLAGS) -c saida/lex.yy.c -o saida/lexer.o

lexer.yy.c:	lexer/lexer.l
			flex lexer/lexer.l
			mv lex.yy.c saida

bison.o:	bison.c
			$(C_COMPILER) $(C_FLAGS) -c saida/bison.c -o saida/bison.o


bison.c:	parser/clang.y
			bison -d -v -t parser/clang.y
			mv clang.tab.c saida/bison.c
			mv clang.tab.h saida/clang.tab.h
			mv clang.output saida

clean:
			rm -f saida/* 

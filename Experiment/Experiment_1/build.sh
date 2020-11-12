flex exp.l
bison -d parser.y
cc -o parser lex.yy.c parser.tab.c ast.c 
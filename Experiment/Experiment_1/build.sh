flex exp.l
bison -d -v parser.y
cc -o parser lex.yy.c parser.tab.c ast.c def.c
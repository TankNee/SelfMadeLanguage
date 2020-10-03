## 第一部分，编写一个简单的计算器
使用lex和yacc便写一个简单的计算器

## 如何编译
```bash
lex caculator.l                 
yacc -dv caculator.y            
cc -o caculator y.tab.c lex.yy.c
```

## 如何运行
```bash
./caculator                     
1+2
>>3.000000
```

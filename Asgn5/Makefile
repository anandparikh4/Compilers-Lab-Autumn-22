parser.out: lex.yy.o y.tab.o translator.o
	g++ lex.yy.o y.tab.o translator.o -ll -o parser.out

translator.o: translator.cxx translator.h
	g++ -c translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: flex_file.l y.tab.h translator.h
	flex flex_file.l

y.tab.c y.tab.h: bison.y
	bison -dty --report=all bison.y

clean:
	rm parser.out ass5_19CS30031_19CS10070_translator.o lex.yy.* y.tab.* y.output
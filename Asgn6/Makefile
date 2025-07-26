parser.out: lex.yy.o y.tab.o ass6_20CS10060_translator.o ass6_20CS10060_20CS10007_target_translator.o
	g++ lex.yy.o y.tab.o ass6_20CS10060_translator.o ass6_20CS10060_20CS10007_target_translator.o -ll -o parser.out

ass6_20CS10060_20CS10007_target_translator.o: ass6_20CS10060_20CS10007_target_translator.cxx ass6_20CS10060_translator.h
	g++ -c ass6_20CS10060_20CS10007_target_translator.cxx

ass6_20CS10060_translator.o: ass6_20CS10060_translator.cxx ass6_20CS10060_translator.h
	g++ -c ass6_20CS10060_translator.cxx

lex.yy.o: lex.yy.c
	g++ -c lex.yy.c

y.tab.o: y.tab.c
	g++ -c y.tab.c

lex.yy.c: ass6_20CS10007_20CS10060.l y.tab.h ass6_20CS10060_translator.h
	flex ass6_20CS10007_20CS10060.l

y.tab.c y.tab.h: ass6_20CS10060_20CS10007.y
	bison -dty ass6_20CS10060_20CS10007.y

libass6_20CS10060.a: ass6_20CS10060.o
	ar -rcs libass6_20CS10060.a ass6_20CS10060.o

ass6_20CS10060.o: ass6_20CS10060.c myl.h
	gcc -c ass6_20CS10060.c

clean:
	rm parser.out ass6_20CS10060_translator.o lex.yy.* y.tab.* libass6_20CS10060.a ass6_20CS10060.o ass6_20CS10060_20CS10007_target_translator.o

test: parser.out libass6_20CS10060.a
	@echo "Generating assembly files\n"
	./parser.out ass6_20CS10007_20CS10060_test1 > ass6_20CS10007_20CS10060_quads1.out
	./parser.out ass6_20CS10007_20CS10060_test2 > ass6_20CS10007_20CS10060_quads2.out
	./parser.out ass6_20CS10007_20CS10060_test3 > ass6_20CS10007_20CS10060_quads3.out
	./parser.out ass6_20CS10007_20CS10060_test4 > ass6_20CS10007_20CS10060_quads4.out
	./parser.out ass6_20CS10007_20CS10060_test5 > ass6_20CS10007_20CS10060_quads5.out
	./parser.out ass6_20CS10007_20CS10060_test6 > ass6_20CS10007_20CS10060_quads6.out
	./parser.out ass6_20CS10007_20CS10060_test7 > ass6_20CS10007_20CS10060_quads7.out
	@echo "Compiling assembly files\n"
	gcc ass6_20CS10007_20CS10060_test1.s -L. -lass6_20CS10060 -no-pie -o test1
	gcc ass6_20CS10007_20CS10060_test2.s -L. -lass6_20CS10060 -no-pie -o test2
	gcc ass6_20CS10007_20CS10060_test3.s -L. -lass6_20CS10060 -no-pie -o test3
	gcc ass6_20CS10007_20CS10060_test4.s -L. -lass6_20CS10060 -no-pie -o test4
	gcc ass6_20CS10007_20CS10060_test5.s -L. -lass6_20CS10060 -no-pie -o test5
	gcc ass6_20CS10007_20CS10060_test6.s -L. -lass6_20CS10060 -no-pie -o test6
	gcc ass6_20CS10007_20CS10060_test7.s -L. -lass6_20CS10060 -no-pie -o test7
	@echo "Running test1:\n"
	@./test1
	@echo "Running test2:\n"
	@./test2
	@echo "Running test3:\n"
	@./test3
	@echo "Running test4:\n"
	@./test4
	@echo "Running test5:\n"
	@./test5
	@echo "Running test6:\n"
	@./test6
	@echo "Running test7:\n"
	@./test7
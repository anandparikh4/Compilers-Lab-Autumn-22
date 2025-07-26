CC = gcc
CFLAGS = -Wall -Wno-unused

a.out: main.o lex.yy.o
	cc $(CFLAGS) main.o lex.yy.o -ll

main.o: main.c lex_return.h
	cc $(CFLAGS) -c main.c

lex.yy.o: lex.yy.c
	cc $(CFLAGS) -c lex.yy.c

lex.yy.c: ass3_20CS10060.l lex_return.h
	lex ass3_20CS10060.l  			

clean: 
	rm lex.yy.o main.o lex.yy.c a.out


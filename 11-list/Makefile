.PHONY=test

test: all
	./list
all: list.o
	gcc -Wall -I./ list.o main.c -o list

list.o: list.h list.c
	gcc -c -Wall -I list.h list.c

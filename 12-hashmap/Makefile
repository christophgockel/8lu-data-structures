.PHONY=test

test: all
	./hashmap

all: ../11-list/list.o hashmap.o
	gcc -Wall -I./ -I../11-list ../11-list/list.o hashmap.o main.c -o hashmap

../11-list/list.o: ../11-list/list.h ../11-list/list.c
	cd ../11-list && $(MAKE) all

hashmap.o: hashmap.h hashmap.c
	gcc -c -Wall -I hashmap.h hashmap.c

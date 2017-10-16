
all: list.c
	gcc -o list list.c

run: all
	./list

clear:
rm list

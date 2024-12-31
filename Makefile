CC = gcc
LDIR = lib

all: example.c $(LDIR)/list.c
	$(CC) example.c $(LDIR)/list.c -o example

clear:
	rm example
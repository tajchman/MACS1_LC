
all: fonctions.a

fonctions.a: A.o B.o
	ar rv $@ $^

clean:
	rm -f A.o B.o fonctions.a

%.o: %.c
	gcc -c $^ -o $@

A.c: A.h
B.c: B.h

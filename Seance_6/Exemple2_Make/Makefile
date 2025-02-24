all: lib ex1.exe

lib:
	${MAKE} -C Fonctions
	
ex1.exe: main.o
	gcc main.o Fonctions/fonctions.a -o ex1.exe

main.o: main.c Fonctions/A.h Fonctions/B.h
	gcc -I Fonctions -c main.c

clean:
	${MAKE} -C Fonctions clean
	rm -f main.o A.o B.o ex1.exe

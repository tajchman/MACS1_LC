all: ex1.exe

ex1.exe: main.o A.o B.o
	gcc main.o A.o B.o -o ex1.exe

main.o: main.c A.h B.h
	gcc -c main.c

A.o: A.c A.h
	gcc -c A.c

B.o: B.c B.h
	gcc -c B.c

clean:
	rm -f main.o A.o B.o ex1.exe

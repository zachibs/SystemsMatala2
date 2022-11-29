
main.o: main.c my_mat.h
	gcc -Wall -c main.c my_mat.h

my_mat.o: my_mat.c
	gcc -Wall -c my_mat.c

connections: main.o my_mat.o
	gcc -o connections main.o my_mat.o

clean:
	rm -f *.o *.gch connections

all: connections
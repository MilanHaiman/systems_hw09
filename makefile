all: main.o
	gcc -o main.o

main.o:
	gcc -c main.c

run:
	./a.out

clean:
	rm *.o
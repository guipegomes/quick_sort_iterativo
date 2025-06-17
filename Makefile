CC = gcc
CFLAGS = -Wall -Wextra -std=c99
OBJ = main.o stack.o quicksort.o

all: quicksort

quicksort: $(OBJ)
	$(CC) $(CFLAGS) -o quicksort $(OBJ)

main.o: main.c quicksort.h stack.h
	$(CC) $(CFLAGS) -c main.c

stack.o: stack.c stack.h
	$(CC) $(CFLAGS) -c stack.c

quicksort.o: quicksort.c quicksort.h stack.h
	$(CC) $(CFLAGS) -c quicksort.c

clean:
	rm -f *.o quicksort
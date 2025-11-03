CC = gcc
CFLAGS = -Wall -Wextra -std=c99 -pedantic

all: calculator

calculator: main.o calculator.o
	$(CC) $(CFLAGS) main.o calculator.o -o calculator -lm

main.o: main.c calculator.h
	$(CC) $(CFLAGS) -c main.c

calculator.o: calculator.c calculator.h
	$(CC) $(CFLAGS) -c calculator.c

clean:
	rm -f *.o calculator

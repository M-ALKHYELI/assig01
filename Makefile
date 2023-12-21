CC = gcc
CFLAGS= -g

CC = gcc
CCFLAGS = -Wall -Wshadow -O2
LFLAGS = -lm

RM = rm -f
all: problem1

problem1: problem1.cpp tinyexpr.o
	$(CC) -c -Wall -Wshadow -O2 problem1.cpp -o problem1.o
	$(CC) -c -Wall -Wshadow -O2 tinyexpr.c -o tinyexpr.o
	$(CC) -Wall -Wshadow -O2 -o problem1 problem1.o tinyexpr.o -lm	

clean:
	$(RM) *.o 

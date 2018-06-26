CC = g++

CFLAGS = -c -Wall

all: Calculator

Calculator: Calculator.o Function.o
	$(CC) Calculator.o Function.o -o Calculator

Calculator.o: Calculator.cpp
	$(CC) $(CFLAGS) Calculator.cpp

Function.o: Function.cpp
	$(CC) $(CFLAGS) Function.cpp

clean:
	rm -rf *.o Calculator

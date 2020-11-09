CC=gcc
AR=ar
FLAGS= -Wall
OBJECTS_LIB=power.o basicMath.o
OBJECTS_MAIN=main.o

all:

mymaths: main.o libmyMath.a
	%(CC) $(FLAGS) -o mymaths libmyMath.a

mymathd: main.o
	libmyMath.so

libmyMath.a:
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)

libmyMath.so:


mains: main.o libmyMath.a
	$(CC) main.o -o mains

maind: main.o libmyMath.so
	$(CC) main.o -o maind

power.o: power.c myMath.h
	$(CC) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) -c basicMath.c

main.o: main.c myMath.h
	$(CC) -c main.c
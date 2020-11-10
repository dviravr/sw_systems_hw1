CC=gcc
AR=ar
FLAGS= -Wall
OBJECTS_LIB=power.o basicMath.o
OBJECTS_MAIN=main.o

all: libmyMath.so libmyMath.a mains maind 

mymaths: libmyMath.a

mymathd: libmyMath.so
	
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a

maind: $(OBJECTS_MAIN)
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so

libmyMath.a: $(OBJECTS_LIB)
	$(AR) -rcs libmyMath.a $(OBJECTS_LIB)

libmyMath.so: $(OBJECTS_LIB) 
	$(CC) -shared -o libmyMath.so $(OBJECTS_LIB)

power.o: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
	
basicMath.o: basicMath.c myMath.h
	$(CC) $(FLAGS) -c basicMath.c

main.o: main.c myMath.h
	$(CC) $(FLAGS) -c main.c

clean:
	rm -f *.o *.a *.so maind mains

.PHONY: clean all

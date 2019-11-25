CC=gcc
AR=ar
OBJECTS_MAIN=main.o
FLAGS= -Wall -g


all:myBanks

myBanks:libmyBank.a

libmyBank.a:myBank.o myBank.h $(OBJECTS_MAIN)
	$(AR) -rcs libmyBank.a myBank.o main.o

myBank.o:myBank.c myBank.h
	$(CC) $(FLAGS) -fpic -c myBank.c

main.o:main.c myBank.h
	$(CC) $(FLAGS) -fpic -c main.c

.PHONY:clean all

clean:
	rm -f *.o *.a 

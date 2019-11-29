GCC=gcc -Wall -g
CLEAN=*.o *.so *.a mains maind

all:myBanks mains runs clean

myBanks:myBank.o
		ar -rcs libmyBank.a myBank.o

mains:myBanks main.o 
	$(GCC) -o mains main.o libmyBank.a 

myBank.o:myBank.c myBank.h
	$(GCC) -c myBank.c

runs:
	./mains
main.o:main.c myBank.h
	$(GCC) -c main.c


clean:
	rm -f $(CLEAN)
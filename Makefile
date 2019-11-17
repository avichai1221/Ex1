CC=gcc
AR=ar
OBJECTS_MAIN=main.o
OBJECTS_POWER=power.o
OBJECTS_basicMath=basicMath.o
FLAGS= -Wall -g
all: mymaths mymathd maind mains
mains: $(OBJECTS_MAIN) libmyMath.a
	$(CC) $(FLAGS) -o mains $(OBJECTS_MAIN) libmyMath.a
maind: $(OBJECTS_MAIN) libmyMath.so
	$(CC) $(FLAGS) -o maind $(OBJECTS_MAIN) ./libmyMath.so
mymathd: $(OBJECTS_POWER) $(OBJECTS_basicMath)
	$(CC) -shared -o libmyMath.so $(OBJECTS_POWER) $(OBJECTS_basicMath)
mymaths: $(OBJECTS_POWER) $(OBJECTS_basicMath)
	$(AR) rcs libmyMath.a $(OBJECTS_POWER) $(OBJECTS_basicMath)



	
power: power.c myMath.h
	$(CC) $(FLAGS) -c power.c
basicMath: basicMath.c myMath.h  
	$(CC) $(FLAGS) -c basicMath.c 
main: main.c myMath.h  
	$(CC) $(FLAGS) -c main.c 

.PHONY: clean all

clean:
	rm -f *.o *.a *.so mains maind



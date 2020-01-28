hw1: hw1.o  DB.o 
	g++ hw1.o  DB.o -o hw1

hw1.o : hw1.cpp  DB.h 
	g++ -Wall -c hw1.cpp

DB.o : DB.cpp DB.h
	g++ -Wall -c DB.cpp

clean :
	rm *.o hw1

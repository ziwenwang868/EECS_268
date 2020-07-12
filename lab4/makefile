Lab4: main.o exe.o  PrecondViolatedExcep.o
	g++ -g -std=c++11 -Wall main.o exe.o PrecondViolatedExcep.o -o Lab4
main.o: main.cpp exe.h
	g++ -g -std=c++11 -Wall -c main.cpp

exe.o: exe.h exe.cpp queue.cpp queue.h node.cpp node.h
	g++ -g -std=c++11 -Wall -c exe.cpp
PrecondViolatedExcep.o: PrecondViolatedExcep.cpp PrecondViolatedExcep.h
	g++ -g -std=c++11 -Wall -c PrecondViolatedExcep.cpp
clean:
	rm *.o Lab4
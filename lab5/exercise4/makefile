ex4: main.o PrecondViolatedExcep.o stack.o node.o 
	g++ -std=c++11 -g -Wall main.o PrecondViolatedExcep.o stack.o node.o  -o ex4
main.o: main.cpp stack.cpp
	g++ -std=c++11 -g -Wall -c main.cpp
PrecondViolatedExcep.o: PrecondViolatedExcep.cpp PrecondViolatedExcep.h
	g++ -g -std=c++11 -Wall -c PrecondViolatedExcep.cpp
stack.o: stack.cpp stack.h node.h PrecondViolatedExcep.h
	g++ -g -std=c++11 -Wall -c stack.cpp
node.o: node.cpp node.h PrecondViolatedExcep.h
	g++ -g -std=c++11 -Wall -c node.cpp


clean: 
	rm *.o ex4

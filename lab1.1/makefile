Prog: main.o studentinfor.o studentdriver.o
	g++ -std=c++11 -g -Wall main.o studentdriver.o studentinfor.o -o Prog
main.o: main.cpp studentdriver.h
	g++ -std=c++11 -g -Wall -c main.cpp
studentdriver.o: studentdriver.h studentdriver.cpp
	g++ -std=c++11 -g -Wall -c studentdriver.cpp
studentinfor.o: studentinfor.h studentinfor.cpp
	g++ -std=c++11 -g -Wall -c studentinfor.cpp
clean:
	rm *.o Prog


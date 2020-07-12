lab10: main.o hospital.o people.o
	g++ -g -std=c++11 -Wall main.o hospital.o people.o -o lab10
main.o: main.cpp hospital.h
	g++ -g -std=c++11 -Wall -c main.cpp
hospital.o: hospital.cpp hospital.h people.h people.cpp
	g++ -g -std=c++11 -Wall -c hospital.cpp
people.o: people.cpp people.h
	g++ -g -std=c++11 -Wall -c people.cpp
clean:
	rm *.o lab10
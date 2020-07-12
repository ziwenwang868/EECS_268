lab7: main.o exe.o
	g++ -g -std=c++11 -Wall main.o exe.o -o lab7

main.o: main.cpp exe.h
	g++ -g -std=c++11 -Wall -c main.cpp

exe.o: exe.h sorts.h sorts.cpp sorttimer.h sorttimer.cpp
	g++ -g -std=c++11 -Wall -c exe.cpp

clean:
	rm *.o lab7
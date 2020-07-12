lab6: main.o mazereader.o mazewaker.o MazeCreationException.o
	g++ -g -std=c++11 -Wall main.o mazereader.o mazewaker.o MazeCreationException.o -o lab6
main.o: main.cpp mazereader.h
	g++ -g -std=c++11 -Wall -c main.cpp
mazereader.o: mazereader.h mazereader.cpp
	g++ -g -std=c++11 -Wall -c mazereader.cpp
mazewaker.o: mazewaker.h mazewaker.cpp
	g++ -g -std=c++11 -Wall -c mazewaker.cpp
MazeCreationException.o: MazeCreationException.cpp MazeCreationException.h
	g++ -g -std=c++11 -Wall -c MazeCreationException.cpp
clean:
	rm *.o lab6
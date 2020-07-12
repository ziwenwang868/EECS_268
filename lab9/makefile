lab9: main.o exe.o pokemon.o test.o
	g++ -g -std=c++11 -Wall main.o exe.o pokemon.o test.o -o lab9
main.o: main.cpp exe.h
	g++ -g -std=c++11 -Wall -c main.cpp

exe.o: exe.h exe.cpp pokemon.h pokemon.cpp bst.cpp bst.h btnode.h btnode.cpp test.cpp test.h
	g++ -g -std=c++11 -Wall -c exe.cpp
pokemon.o: pokemon.cpp pokemon.h
	g++ -g -std=c++11 -Wall -c pokemon.cpp
test.o: test.cpp test.h
	g++ -g -std=c++11 -Wall -c test.cpp

clean:
	rm *.o lab9

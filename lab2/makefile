Prog: main.o exe.o linkedlist.o linkedtester.o node.o
	g++ -std=c++11 -g -Wall main.o exe.o linkedlist.o linkedtester.o node.o -o Prog
main.o: main.cpp exe.h
	g++ -std=c++11 -g -Wall -c main.cpp
exe.o: exe.h exe.cpp linkedlist.h linkedlisttester.h
	g++ -std=c++11 -g -Wall -c exe.cpp
linkedlist.o: linkedlist.h linkedlist.cpp Node.h
	g++ -std=c++11 -g -Wall -c linkedlist.cpp
node.o: Node.h node.cpp
	g++ -std=c++11 -g -Wall -c node.cpp
linkedtester.o: linkedlisttester.h linkedtester.cpp
	g++ -std=c++11 -g -Wall -c linkedtester.cpp
clean:
	rm *.o Prog

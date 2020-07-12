Prog: main.o exe.o browser.o tab.o
	g++ -std=c++11 -g -Wall main.o exe.o browser.o tab.o -o Prog
main.o: main.cpp exe.h
	g++ -std=c++11 -g -Wall -c main.cpp
exe.o: exe.h exe.cpp browser.h tab.h
	g++ -std=c++11 -g -Wall -c exe.cpp
browser.o: browser.h browser.cpp tab.h linkedlist.h linkedlist.cpp
	g++ -std=c++11 -g -Wall -c browser.cpp
tab.o: tab.h tab.cpp linkedlist.h linkedlist.cpp
	g++ -std=c++11 -g -Wall -c tab.cpp
clean:
	rm *.o Prog

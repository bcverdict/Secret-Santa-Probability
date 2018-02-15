Santa: main.o Secret.o 
	g++ -std=c++11 -g -Wall main.o Secret.o -o Santa

main.o: main.cpp Secret.h
	g++ -std=c++11 -g -Wall -c main.cpp

Secret.o: Secret.h Secret.cpp 
	g++ -std=c++11 -g -Wall -c Secret.cpp

clean:
	rm *.o Santa
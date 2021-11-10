# this is a comment in a Makefile
# we put the main rule first because it's the one we really want to
# use
main: main.o searching.o
	# link together the requirements to make the final executable
	g++ -std=c++17 main.o searching.o -o main

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

searching.o: searching.cpp
	g++ -std=c++17 -c searching.cpp

timer: timer.cpp
	g++ -std=c++17 timer.cpp -o timer

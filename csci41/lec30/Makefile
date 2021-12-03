# every Makefile rule has a target name
# requirements come after the :
# then you tab over and give the "body" of the rule
main: a.o b.o
	g++ -std=c++17 a.o b.o -o main

a.o: a.cpp
	g++ -std=c++17 -c a.cpp

b.o: b.cpp
	g++ -std=c++17 -c b.cpp

# a "clean" rule usually removes all the compiled files
clean:
	rm a.o b.o main

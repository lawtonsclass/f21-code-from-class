# target_name: requirement1 requirement2 ...
#   terminal command 1 to make target
#   terminal command 2 to make target
#   ...

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

recursion.o: recursion.cpp
	g++ -std=c++17 -c recursion.cpp

main: main.o recursion.o
	g++ -std=c++17 main.o recursion.o -o main

CC=g++
CCFLAGS=-std=c++17

# rule to make main
# I need main.o and counter.o first
main: main.o counter.o
	# this is how to make main out of main.o and counter.o
	$(CC) $(CCFLAGS) $^ -o $@

main.o: main.cpp
	g++ -std=c++17 -c main.cpp

counter.o: counter.cpp
	g++ -std=c++17 -c counter.cpp

clean:
	rm -f main.o counter.o main

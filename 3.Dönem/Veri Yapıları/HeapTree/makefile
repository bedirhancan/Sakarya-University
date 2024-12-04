all: compile run

compile:
	g++ -I ./include/ -o ./lib/Heap.o -c ./src/Heap.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Heap.o ./src/Test.cpp
	
run:
	./bin/Test
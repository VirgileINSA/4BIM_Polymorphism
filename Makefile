CXXFLAGS = -Wall

main: main.o character.o
	g++ main.o character.o -o main

main.o: main.cpp 
	g++ -c main.cpp -o main.o

character.o: character.cpp character.h
	g++ -c character.cpp -o character.o

clean:
	rm main *.o
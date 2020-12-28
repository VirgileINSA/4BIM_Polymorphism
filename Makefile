CXXFLAGS = -Wall

main: main.o character.o yoshi.o mario.o
	g++ main.o character.o yoshi.o mario.o -o main

main.o: main.cpp 
	g++ -c main.cpp -o main.o

yoshi.o: yoshi.cpp 
	g++ -c yoshi.cpp -o yoshi.o

mario.o: mario.cpp 
	g++ -c mario.cpp -o mario.o

character.o: character.cpp character.h
	g++ -c character.cpp -o character.o

clean:
	rm main *.o
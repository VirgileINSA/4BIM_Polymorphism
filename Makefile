CXXFLAGS = -Wall

test: character.o G_test.o yoshi.o mario.o
	g++ -o tests G_test.o character.o yoshi.o mario.o googletest-release-1.10.0/build/lib/libgtest.a googletest-release-1.10.0/build/lib/libgtest_main.a -pthread
	./tests
	
G_test.o: G_test.cpp
	g++ -c G_test.cpp -o G_test.o -I googletest-release-1.10.0/googletest/include/ -std=c++11

#If you want to run the "main" file instead of the "tests" file :

# main: main.o character.o yoshi.o mario.o
# 	g++ main.o character.o yoshi.o mario.o -o main

# main.o: main.cpp 
# 	g++ -c main.cpp -o main.o

yoshi.o: yoshi.cpp 
	g++ -c yoshi.cpp -o yoshi.o

mario.o: mario.cpp 
	g++ -c mario.cpp -o mario.o

character.o: character.cpp character.h
	g++ -c character.cpp -o character.o

clean:
	rm main tests *.o
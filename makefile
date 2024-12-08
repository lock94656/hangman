all: main display
	g++ lib/main.o lib/display.o -o bin/main.exe
	
main: src/main.cpp 
	g++ -c src/main.cpp -Iinclude -o lib/main.o
	
display: src/display.cpp
	g++ -c  src/display.cpp -Iinclude -o lib/display.o

clean:
	rm lib/*.o
	rm bin/*.exe
all:
	mingw32-g++ -I src/include -L src/lib -o main *.cpp -lmingw32 -lSDL2main -lSDL2
	./main
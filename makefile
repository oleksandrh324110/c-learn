all:
	gcc src/main.c -o bin/main.exe -std=c99 -O0
	bin/main.exe
cc = gcc
cflags = -std=c11 -Os -Wall

%: src/%.c
	$(cc) $(cflags) -o bin/$@.exe $<
CC = clang
CFLAGS = -std=c11 -O0
LDFLAGS =

SRCS = $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)
OBJS  = $(SRCS:.c=.o)

all: compile link run

compile: $(OBJS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

link:
	$(CC) $(OBJS) -o bin/main $(LDFLAGS)

run:
	bin/main

clean:
	rm $(OBJS)
OS := $(or $(OS), $(shell uname))

CFLAGS := -std=c11 -O0 -g -Wall -Wextra -Wpedantic
CFLAGS +=
LDFLAGS :=

CMAKEFLAGS :=

ifeq ($(OS), Windows_NT)
	CC := gcc
	CFLAGS +=
	LDFLAGS +=
	CMAKEFLAGS +=
else ifeq ($(OS), Darwin)
	CC := clang
	CFLAGS +=
	LDFLAGS +=
endif

SRC = $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)
OBJ = $(SRC:.c=.o)

.PHONY: all clean

all: compile link run

compile: $(OBJ)

test:
	echo $(OS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

link:
	$(CC) $(OBJ) -o bin/main.exe $(LDFLAGS)

run:
	bin/main.exe
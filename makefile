default-target: all
.PHONY: default-target

ifndef target
$(error target is NOT defined)
endif

CFLAGS := -std=c11 -O0 -g -Wall -Wextra -Wpedantic
CFLAGS +=
LDFLAGS :=

CMAKEFLAGS :=

ifeq ($(target), linux)
	CC := gcc
	CFLAGS +=
	LDFLAGS +=
else ifeq ($(target), windows)
	CC := gcc
	CFLAGS +=
	LDFLAGS +=
else ifeq ($(target), darwin)
	CC := clang
	CFLAGS +=
	LDFLAGS +=
else ifeq ($(target), wsl)
	CC := gcc
	CFLAGS +=
	LDFLAGS +=
endif

SRC = $(wildcard src/*.c) $(wildcard src/**/*.c) $(wildcard src/**/**/*.c) $(wildcard src/**/**/**/*.c)
OBJ = $(SRC:.c=.o)

all: compile link run

compile: $(OBJ)

test:
	echo $(OS)

%.o: %.c
	$(CC) -c $< -o $@ $(CFLAGS)

link:
	$(CC) $(OBJ) -o bin/main.exe $(LDFLAGS)

run:
	./bin/main.exe

clean:
	rm $(OBJ)

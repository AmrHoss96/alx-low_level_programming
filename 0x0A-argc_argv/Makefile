CC = gcc
CFLAGS = -Wall -Wextra -Werror -pedantic -std=gnu89
SRC = $(filter-out Makefile, $(wildcard *.c))

.PHONY: all clean

all: $(patsubst %.c,%,$(SRC))

%: %.c
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -f $(patsubst %.c,%,$(SRC))


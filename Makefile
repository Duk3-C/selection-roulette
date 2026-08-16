CC = gcc
CFLAGS = -Wall -Wextra -std=gnu11
TARGET = selection-roulette

$(TARGET): prog.o
	$(CC) -o $@ $^

prog.o: prog.c 
	$(CC) $(CFLAGS) -c prog.c 

clean:
	rm -f $(TARGET) prog.o

.PHONY: clean

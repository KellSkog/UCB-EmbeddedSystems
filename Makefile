SRCS = main.c stats.c
OBJS := $(SRCS:.c=.o)
CC = gcc

.PHONY: all
all: main.out

main.out: $(OBJS)
	$(CC) -o $@ $^

test.out: test.o stats.o
	$(CC) $^ -o $@

%.o: %.c
	$(CC) -c $< -o $@

clean:
	-@rm -f *.out *.o *.i *.s

CFLAGS = -Wall -g
EXE = a.out
SOURCE = potato.c
CC = gcc
DEPS = apple.o potatosalad.o

all: clean potato

manual:
	gcc -Wall -g -c -o apple.o apple.c
	gcc -Wall -g -c -o potatosalad.o potatosalad.c
	gcc -Wall -g potato.c -o a.out apple.o potatosalad.o

potato: $(DEPS)
	$(CC) $(CFLAGS) $(SOURCE) -o $(EXE) $(DEPS)

clean:
	rm -rf a.out *.o


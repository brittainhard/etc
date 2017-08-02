CC = gcc
EXE = a.out
CFLAGS = -Wall -g
DEPS = error.o
HEADERS = apue.h

program: $(DEPS) $(source)
	$(CC) $(CFLAGS) $(source) -o $(EXE) $(DEPS)

clean:
	rm -rf a.out *.o

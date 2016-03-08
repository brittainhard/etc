CC = ghc
EXE = a.out
MAIN = hello_world.hs
DEPENDENCIES =

all: hello

hello: $(MAIN)
	$(CC) $(MAIN) -o $(EXE)

clean:
	rm -rf *.o *.hi $(EXE)

CC  = g++
SRC = listing_3.5.cc
EXE = listing_3.5
OPT = -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -std=c++17 

$(EXE): $(SRC)
	$(CC) $(OPT) $< -o $@

.PHONY:

clean:
	rm $(EXE)
CC  = g++
SRC = listing_2.1.cc
EXE = listing_2.1
OPT = -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -std=c++17

$(EXE): $(SRC)
	$(CC) $(OPT) $< -o $@

.PHONY:

clean:
	rm $(EXE)
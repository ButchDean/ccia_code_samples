CC  = g++
EXE = listing_4.6
SRC = $(EXE).cpp
OPT = -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -std=c++17

$(EXE): $(SRC)
	$(CC) $(OPT) $< -o $@

.PHONY:

clean:
	rm -rf $(EXE) $(EXE).dSYM

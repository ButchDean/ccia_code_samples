CC  = g++
SRC = listing_2.6.cc
EXE = listing_2.6
OPT = -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -std=c++17 

$(EXE): $(SRC)
	$(CC) $(OPT) $< -o $@

.PHONY:

clean:
	rm $(EXE)
CC  = g++
SRC = listing_3.4.cc
EXE = listing_3.4
OPT = -Wall -Wextra -Wshadow -Wnon-virtual-dtor -pedantic -std=c++17 

$(EXE): $(SRC)
	$(CC) $(OPT) $< -o $@

.PHONY:

clean:
	rm $(EXE)
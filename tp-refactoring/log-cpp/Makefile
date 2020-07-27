CXX=c++
SRC = $(shell find . -name "*.cpp")
BIN = $(SRC:.cpp=.out)
CXXFLAGS = -Wall -Wextra -O2
LDFLAGS =

.PHONY: all clean

all: $(BIN)

%.out: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LDFLAGS)

clean:
	rm -f $(BIN)


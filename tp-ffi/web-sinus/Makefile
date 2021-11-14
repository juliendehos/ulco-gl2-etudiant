OPT = --bind --std=c++14 -O2 -Wall -Wextra -s WASM=1 

all: 
	emcc $(OPT) -o sinus.js sinus.cpp
	python3 -m http.server --directory . 8080

clean:
	rm -f sinus.js sinus.wasm


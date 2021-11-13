SRC = fibo.cpp

OPT = --bind --std=c++14 -O2 -Wall -Wextra -s WASM=1 

all: 
	nix-shell --run "emcc $(OPT) -o all.js $(SRC)"
	nix-shell --run "python3 -m http.server --directory . 8080"

clean:
	rm -f all.js all.wasm


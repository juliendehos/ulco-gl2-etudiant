SRC = fibo.cpp

OPT = --bind --std=c++14 -O2 -Wall -Wextra -s WASM=1 

all: 
	emcc $(OPT) -o all.js $(SRC)
	python3 -m http.server --directory . 8080

clean:
	rm -f all.js all.wasm


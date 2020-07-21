SRC = fibo.cpp

OPT = --bind --std=c++14 -O2 -Wall -Wextra -s WASM=1 

all: 
	emcc $(OPT) -o all.js $(SRC)

run:
	python3 -m http.server --directory .
	# python2 -m SimpleHTTPServer

clean:
	rm -f all.js all.wasm



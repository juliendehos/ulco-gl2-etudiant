SRC = app.cpp ../src/Board.cpp ../app/UiSdl.cpp 
OPT = --bind --std=c++14 -O2 -Wall -Wextra -s WASM=1 -s USE_SDL=2 -s USE_SDL_GFX=2 -I../src/ -I../app

all: 
	mkdir -p public
	emcc $(OPT) -o public/app.js $(SRC)
	cp index.html ./public/

run:
	python3 -m http.server -d ./public 3000

clean:
	rm -rf ./public


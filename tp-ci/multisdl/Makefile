SRC = $(shell find ./src -name "*.cpp")
OPT = --std=c++14 -O2 -Wall -Wextra -Isrc
NATIVE_OPT = $(shell pkg-config --cflags --libs sdl2 SDL2_gfx)
WASM_OPT = --bind -s WASM=1 -s USE_SDL=2 -s USE_SDL_GFX=2 

.PHONY: app test wasm run-wasm clean

app:
	mkdir -p build-app
	c++ $(OPT) $(NATIVE_OPT) -o build-app/app.out app/*.cpp $(SRC)

test:
	mkdir -p build-test
	c++ $(OPT) $(NATIVE_OPT) -o build-test/test.out test/*.cpp $(SRC)
	./build-test/test.out

wasm:
	mkdir -p build-wasm
	em++ $(OPT) $(WASM_OPT) -o ./build-wasm/main.js wasm/*.cpp $(SRC)
	cp wasm/index.html build-wasm/

run-wasm:
	python3 -m http.server --directory build-wasm 8080

clean:
	rm -rf build-wasm build-test build-app


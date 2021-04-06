all:
	em++ --bind --std=c++14 -O2 -s WASM=1 -o tictactoe.js ../cpp/Tictactoe.cpp TictactoeBinding.cpp

run:
	python3 -m http.server --directory . 8080

clean:
	rm -f tictactoe.js tictactoe.wasm


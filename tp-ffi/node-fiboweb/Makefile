
all:
	em++ --bind --std=c++11 *.cpp -s WASM=1 -o all_wasm.js
	em++ --bind --std=c++11 *.cpp -s WASM=0 -o all_asmjs.js
	npm install
	node server.js

clean:
	rm -rf node_modules package-lock.json all_*


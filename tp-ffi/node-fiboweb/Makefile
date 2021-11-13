
all:
	nix-shell --run "em++ --bind --std=c++11 *.cpp -s WASM=1 -o all_wasm.js"
	nix-shell --run "em++ --bind --std=c++11 *.cpp -s WASM=0 -o all_asmjs.js"
	nix-shell --run "npm install"
	nix-shell --run "node server.js"

clean:
	rm -rf node_modules package-lock.json all_*


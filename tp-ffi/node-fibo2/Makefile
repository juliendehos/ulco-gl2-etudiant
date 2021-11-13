
fibo:
	nix-shell --run "em++ --bind -s WASM=0 -o fibo.js fibo.cpp"
	nix-shell --run "node test_fibo.js"


clean:
	rm -rf fibo.js sinus.js node_modules core package-lock.json


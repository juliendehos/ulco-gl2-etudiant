with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {

  name = "tictactoe-wasm";

  src = ./.;

  buildInputs = [
    gnumake
    python3
    python3Packages.httpserver
    emscriptenPackages.zlib

  ];

}




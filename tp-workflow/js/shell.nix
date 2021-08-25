with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "tictactoe-wasm";
  src = ./.;

  buildInputs = [
    gnumake
    python3
    python3Packages.httpserver
  ];

}


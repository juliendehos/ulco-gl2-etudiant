with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "naze-wasm";
  src = ./.;

  buildInputs = [
    gnumake
    python3
  ];

}


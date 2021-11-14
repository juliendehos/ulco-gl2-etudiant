with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "node-fibo2";
  src = ./.;

  buildInputs = [
    gnumake
    nodejs
  ];

}


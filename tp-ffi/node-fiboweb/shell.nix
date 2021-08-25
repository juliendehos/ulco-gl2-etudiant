with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "node-fiboweb";
  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
  ];

}


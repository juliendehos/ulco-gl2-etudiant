# with import <nixpkgs> {};
# with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/a9d3d2f349ae01c46f9e506502b494f0ee2caa98.tar.gz") {};
with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "web-fibo3";
  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
    # emscriptenPackages.zlib
  ];

}


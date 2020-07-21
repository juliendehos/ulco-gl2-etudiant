with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {

  name = "web-fibo3";

  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
    emscriptenPackages.zlib
  ];

}


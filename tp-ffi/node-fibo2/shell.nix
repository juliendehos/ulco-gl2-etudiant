with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {
  name = "node-fibo2";
  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
    emscriptenPackages.zlib
  ];

}


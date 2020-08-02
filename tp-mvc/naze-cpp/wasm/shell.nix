with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {
  name = "naze-wasm";
  src = ./.;

  buildInputs = [
    gnumake
    python3
    emscriptenPackages.zlib
  ];

}


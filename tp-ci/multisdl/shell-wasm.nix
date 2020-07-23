with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {
  name = "multisdl-wasm";
  src = ./.;
  nativeBuildInputs = [
    gnumake
    python3
    pkgconfig
    SDL2
    SDL2_gfx
    emscriptenPackages.zlib
  ];
}


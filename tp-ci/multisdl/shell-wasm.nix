with import (fetchTarball "https://github.com/NixOS/nixpkgs/archive/20.03.tar.gz") {};

emscriptenStdenv.mkDerivation {
  name = "multisdl-wasm";
  src = ./.;
  nativeBuildInputs = [
    gnumake
    python3
    pkgconfig
    SDL2
    SDL2_gfx
  ];
}


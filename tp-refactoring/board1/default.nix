with import <nixpkgs> {};

stdenv.mkDerivation {
    name = "board";
    src = ./.;
    nativeBuildInputs = [
        cmake
    ];
}

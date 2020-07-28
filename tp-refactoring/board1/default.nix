with import <nixpkgs> {};

clangStdenv.mkDerivation {
    name = "board";
    src = ./.;
    nativeBuildInputs = [
        cmake
    ];
}

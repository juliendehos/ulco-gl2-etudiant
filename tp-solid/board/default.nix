{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
    name = "board";
    src = ./.;

    nativeBuildInputs = [
        cmake
    ];
}


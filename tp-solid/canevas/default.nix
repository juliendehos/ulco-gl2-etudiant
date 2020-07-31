{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
    name = "canevas";
    src = ./.;

    nativeBuildInputs = [
        cmake
    ];
}


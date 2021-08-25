{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
    name = "board";
    src = ./.;

    nativeBuildInputs = [
        cmake
    ];
}


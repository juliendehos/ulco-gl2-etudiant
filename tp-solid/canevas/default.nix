{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
    name = "canevas";
    src = ./.;

    nativeBuildInputs = [
        cmake
    ];
}


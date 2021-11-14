{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
    name = "matrix";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
    ];

    doCheck = true;
}



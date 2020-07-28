{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
    name = "matrix";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
    ];

    doCheck = true;
}



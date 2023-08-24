{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
    name = "todolist-cpp";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
    ];

    doCheck = true;
}



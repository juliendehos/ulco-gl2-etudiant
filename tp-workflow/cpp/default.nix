{ pkgs ? import <nixpkgs> {} }:

with pkgs;

stdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;
  buildInputs = [
    cmake
    pkgconfig
    doxygen
    cpputest
  ];
}


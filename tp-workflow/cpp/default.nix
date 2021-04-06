{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;
  buildInputs = [
    cmake
    catch2
    doxygen
    pkgconfig
  ];
}


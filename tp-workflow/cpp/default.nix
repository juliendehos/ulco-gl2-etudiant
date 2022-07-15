{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;

  buildInputs = [
    cmake
    catch2
    doxygen
    pkgconfig
    python3Packages.pybind11
  ];

 doCheck = true;

}


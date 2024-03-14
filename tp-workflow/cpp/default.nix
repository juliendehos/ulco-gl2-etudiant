{ pkgs ? import <nixpkgs> {} }:

with pkgs; stdenv.mkDerivation {
  name = "tictactoe";
  src = ./.;

  buildInputs = [
    cmake
    catch2
    doxygen
    pkg-config
    python3Packages.pybind11
  ];

 doCheck = true;

}


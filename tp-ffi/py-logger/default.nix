{ pkgs ? import <nixpkgs> {} }:

with pkgs; python3Packages.buildPythonPackage {
  name = "py-logger";
  src = ./.;
  buildInputs = [ 
    python3Packages.pybind11
  ];
}

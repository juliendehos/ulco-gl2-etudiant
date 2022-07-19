{ pkgs ? import <nixpkgs> {} }:

with pkgs; python3Packages.buildPythonPackage {
  name = "py-fibo2";
  src = ./.;
  buildInputs = [ 
    gobject-introspection
    gtk3
    python3Packages.matplotlib
    python3Packages.numpy
    python3Packages.pybind11
    python3Packages.pygobject3
  ];
}

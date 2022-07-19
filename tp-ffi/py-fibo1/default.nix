{ pkgs ? import <nixpkgs> {} }:

with pkgs; python3Packages.buildPythonPackage {
  name = "py-fibo1";
  src = ./.;
}

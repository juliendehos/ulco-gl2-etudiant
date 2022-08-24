with import <nixpkgs> {};

python3Packages.buildPythonPackage {
    name = "py-fibo1";
    src = ./.;
  }

with import <nixpkgs> {};

python3Packages.buildPythonPackage {
    name = "py-logger";
    src = ./.;
    propagatedBuildInputs = [
        python3Packages.pybind11
    ];
  }

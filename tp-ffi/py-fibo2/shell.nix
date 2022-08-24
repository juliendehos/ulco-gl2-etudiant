with import <nixpkgs> {};

python3Packages.buildPythonPackage {
    name = "py-fibo2";
    src = ./.;
    propagatedBuildInputs = [ 
      gobject-introspection
      gtk3
      python3Packages.matplotlib
      python3Packages.numpy
      python3Packages.pybind11
      python3Packages.pygobject3
    ];
  }


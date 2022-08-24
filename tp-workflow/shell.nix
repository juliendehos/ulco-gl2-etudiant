with import <nixpkgs> {};

python3Packages.buildPythonPackage {
    name = "tictactoe-gui";
    src = ./.;
    propagatedBuildInputs = [ 
        gobject-introspection
        gtk3
        python3Packages.pygobject3
        python3Packages.pybind11
    ];
  }


{ pkgs ? import <nixpkgs> {} }:

let
    tictactoe = pkgs.python3.pkgs.buildPythonPackage {
        pname = "tictactoe-gui";
        version = "0.1.0";
        src = ./.;
        propagatedBuildInputs = [
            pkgs.gobject-introspection
            pkgs.gtk3
            pkgs.python3Packages.pygobject3
            pkgs.python3Packages.pybind11
        ];
    };

in pkgs.mkShell {
  packages = [
    (pkgs.python3.withPackages (ps: [ tictactoe ]))
    pkgs.gobject-introspection
    pkgs.gtk3
  ];
}


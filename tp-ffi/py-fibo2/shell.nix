with import <nixpkgs> {};

let py-fibo2 = python3Packages.buildPythonPackage {
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
  };

in pkgs.mkShell {
  packages = [
    (pkgs.python3.withPackages (ps: [ py-fibo2 ]))
    pkgs.gobject-introspection
    pkgs.gtk3
  ];
}

with import <nixpkgs> {};

let 
  py-logger = python3Packages.buildPythonPackage {
      name = "py-logger";
      src = ./.;
      buildInputs = [
          python3Packages.pybind11
      ];
    };

in pkgs.mkShell {
  packages = [
    (pkgs.python3.withPackages (ps: [ py-logger ]))
  ];
}


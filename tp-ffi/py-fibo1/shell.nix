with import <nixpkgs> {};

let py-fibo1 = python3Packages.buildPythonPackage {
    name = "py-fibo1";
    src = ./.;
    propagatedBuildInputs = [
    ];
  };

in pkgs.mkShell {
  packages = [
    (pkgs.python3.withPackages (ps: [ py-fibo1 ]))
  ];
}

{ pkgs ? import <nixpkgs> {} }:

pkgs.clangStdenv.mkDerivation {
    name = "masuperlib";
    src = ./.;

    nativeBuildInputs = [
        pkgs.cmake
        pkgs.catch2
    ];

    doCheck = true;
    checkPhase = ''
      LD_LIBRARY_PATH="$(pwd)" ctest --force-new-ctest-process
    '';

}


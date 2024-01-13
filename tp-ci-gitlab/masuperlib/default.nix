{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
    name = "masuperlib";
    src = ./.;

    nativeBuildInputs = with pkgs; [
        cmake
        catch2
        doxygen
    ];

    doCheck = true;
    checkPhase = ''
      LD_LIBRARY_PATH="$(pwd)" ctest --force-new-ctest-process
    '';

}


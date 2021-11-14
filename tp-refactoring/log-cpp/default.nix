{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
    name = "log-cpp";
    src = ./.;

    nativeBuildInputs = with pkgs; [
        cmake
    ];

}


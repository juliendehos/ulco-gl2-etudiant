{ pkgs ? import <nixpkgs> {} }:

pkgs.stdenv.mkDerivation {
    name = "store";
    src = ./.;

    nativeBuildInputs = with pkgs; [
        cmake
    ];

}

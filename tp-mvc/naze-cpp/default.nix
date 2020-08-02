{ pkgs ? import <nixpkgs> {} }:

with pkgs; clangStdenv.mkDerivation {
    name = "naze";
    src = ./.;

    nativeBuildInputs = [
        cmake
        catch2
        pkgconfig
        SDL2
        SDL2_gfx
    ];

    doCheck = true;
}

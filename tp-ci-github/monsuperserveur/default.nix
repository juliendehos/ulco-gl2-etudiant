{ pkgs ? import <nixpkgs> {} }:

let

  ghc = pkgs.haskellPackages;

in ghc.developPackage {

  root = ./.;

  withHoogle = false;

  modifier = drv:
    pkgs.haskell.lib.addBuildTools drv (with ghc; [
      cabal-install
    ]);
  }


{ pkgs ? import <nixpkgs> {} }:
let drv = pkgs.haskellPackages.callCabal2nix "monsuperserveur" ./. {};
in if pkgs.lib.inNixShell then drv.env else drv


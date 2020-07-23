{ pkgs ? import <nixpkgs> {} }:
let drv = pkgs.haskellPackages.callCabal2nix "remotemul2" ./. {};
in if pkgs.lib.inNixShell then drv.env else drv


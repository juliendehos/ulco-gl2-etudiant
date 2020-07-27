{ pkgs ? import <nixpkgs> {} }:
let drv = pkgs.haskellPackages.callCabal2nix "log-hs" ./. {};
in if pkgs.lib.inNixShell then drv.env else drv

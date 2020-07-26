let
  pkgs = import <nixpkgs> {};
  drv = pkgs.haskell.packages.ghcjs.callCabal2nix "app" ./. {};
in drv.env


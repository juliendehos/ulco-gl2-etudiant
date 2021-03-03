{ pkgs ? import <nixpkgs> {} }:

let
  # app = pkgs.haskellPackages.callCabal2nix "remotemul2" ./. {};
  drv = pkgs.haskellPackages.callCabal2nix "remotemul2" ./. {};
  app = pkgs.haskell.lib.justStaticExecutables drv;

  entrypoint = pkgs.writeScript "entrypoint.sh" ''
    #!${pkgs.stdenv.shell}
    $@
  '';

in
  pkgs.dockerTools.buildLayeredImage {
    name = "remotemul2";
    tag = "latest";
    config = {
      WorkingDir = "${app}";
      Entrypoint = [ entrypoint ];
      Cmd = [ "${app}/bin/remotemul2" ];
    };
  }

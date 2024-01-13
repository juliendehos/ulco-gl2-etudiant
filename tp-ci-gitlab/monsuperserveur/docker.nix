{ pkgs ? import <nixpkgs> {} }:

let
  drv = pkgs.haskellPackages.callCabal2nix "monsuperserveur" ./. {};
  app = pkgs.haskell.lib.justStaticExecutables drv;

  entrypoint = pkgs.writeScript "entrypoint.sh" ''
    #!${pkgs.stdenv.shell}
    $@
  '';

in
  pkgs.dockerTools.buildLayeredImage {
    name = "monsuperserveur";
    tag = "latest";
    config = {
      WorkingDir = "${app}";
      Entrypoint = [ entrypoint ];
      Cmd = [ "${app}/bin/monsuperserveur" ];
    };
  }

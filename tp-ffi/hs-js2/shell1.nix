let
  config = { 
    packageOverrides = pkgs: rec {
      haskell = pkgs.haskell // {
        packages = pkgs.haskell.packages // {
          ghcjs = pkgs.haskell.packages.ghcjs.override {
            overrides = self: super: with pkgs.haskell.lib; {
              QuickCheck = dontCheck (doJailbreak super.QuickCheck);
              tasty = dontCheck (doJailbreak super.tasty);
              tasty-quickcheck = dontCheck (doJailbreak super.tasty-quickcheck);
              time-compat = dontCheck (doJailbreak super.time-compat);
              scientific = dontCheck (doJailbreak super.scientific);
            };
          };
        };
      };
    };
  };
  pkgs = import <nixpkgs> { inherit config; };
  drv = pkgs.haskell.packages.ghcjs.callCabal2nix "app" ./. {};
in drv.env


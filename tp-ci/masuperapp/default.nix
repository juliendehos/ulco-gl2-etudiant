with import <nixpkgs> {};

let
  #masuperlib-src = fetchTarball "https://gitlab.com/juliendehos/masuperlib/-/archive/v0.1/masuperlib-v0.1.tar.gz";
  masuperlib-src = ../masuperlib;

  masuperlib = callPackage masuperlib-src {};

in stdenv.mkDerivation {
    name = "masuperpp";
    src = ./.;
    nativeBuildInputs = [ cmake ];
    buildInputs = [ masuperlib ];
}


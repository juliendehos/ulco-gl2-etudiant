with import <nixpkgs> {};

let
  masuperlib-src = fetchTarball "https://gitlab.com/TODO/masuperlib/-/archive/v0.1/masuperlib-v0.1.tar.gz";
  masuperlib = callPackage masuperlib-src {};

in stdenv.mkDerivation {
    name = "masuperpp";
    src = ./.;
    nativeBuildInputs = [ cmake ];
    buildInputs = [ masuperlib ];
}


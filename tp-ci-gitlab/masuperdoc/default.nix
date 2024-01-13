with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "masuperdoc";
  src = ./.;

  nativeBuildInputs = [
    mdbook
  ];

  buildPhase = ''
    mdbook build
  '';

  installPhase = ''
    mkdir -p $out/public
    cp -r book/* $out/public/
  '';

}


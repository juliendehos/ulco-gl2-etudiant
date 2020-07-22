with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "masuperdoc";
  src = ./.;

  nativeBuildInputs = [
    gnumake
    python3Packages.sphinx
  ];

  buildPhase = ''
    make html
  '';

  installPhase = ''
    mkdir -p $out/public
    cp -r build/html/* $out/public/
  '';

}


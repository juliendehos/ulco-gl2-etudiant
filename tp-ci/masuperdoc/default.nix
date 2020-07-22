with import <nixpkgs> {};

stdenv.mkDerivation {
  name = "masuperdoc";
  src = ./.;

  installPhase = ''
    mkdir -p $out/public
    cp index.html $out/public/
  '';

  # nativeBuildInputs = [
  #   gnumake
  #   python3Packages.sphinx
  # ];

  # buildPhase = ''
  #   make html
  # '';

  # installPhase = ''
  #   mkdir -p $out/public
  #   cp -r build/html/* $out/public/
  # '';

}


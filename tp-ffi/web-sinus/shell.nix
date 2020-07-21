with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {
  name = "web-sinus";
  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
    emscriptenPackages.zlib
  ];

}


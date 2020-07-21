with import <nixpkgs> {};

emscriptenStdenv.mkDerivation {
  name = "node-fiboweb";
  src = ./.;

  buildInputs = [
    gnumake
    python3Packages.httpserver
    emscriptenPackages.zlib
  ];

}


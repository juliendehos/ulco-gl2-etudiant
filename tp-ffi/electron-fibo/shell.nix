with import <nixpkgs> {};

mkShell {
  buildInputs = [
    electron
    gnumake
    nodejs
  ];
}


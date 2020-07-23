with import <nixpkgs> {};

clangStdenv.mkDerivation {
  name = "multisdl-native";
  src = ./.;
  nativeBuildInputs = [
    catch2
    gnumake
    pkgconfig
    SDL2
    SDL2_gfx
  ];
}


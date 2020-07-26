
- manual config:

```
nix-shell shell1.nix
make
firefox static/index.html
```

- miso config:

```
cachix use miso-haskell
nix-shell shell2.nix
make
firefox static/index.html
```


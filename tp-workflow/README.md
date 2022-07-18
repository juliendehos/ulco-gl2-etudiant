# Tictactoe

Implémentation C++/Python du jeu de Tictactoe.


## Module C++

- aller dans le dossier `tp-workflow/cpp`
- lancer VSCode
- pour compiler/exécuter : utiliser les fonctionnalités de VSCode


## Module Python

- aller dans le dossier `tp-workflow`
- lancer VSCode
- pour exécuter : `nix-shell --run "tictactoe_gui.py"`


## Pour utiliser l'interpréteur Python

```
nix-shell --run "python"
import tictactoe
jeu = tictactoe.Jeu()
status = jeu.getStatus()
status.name
...
```

## Documentations Python/Gtk3

- https://python-gtk-3-tutorial.readthedocs.io/en/latest/index.html
- https://www.cairographics.org/documentation/cairomm/reference/classCairo_1_1Context.html
- https://athenajc.gitbooks.io/python-gtk-3-api/content/gtk-group/gtkdrawingarea.html


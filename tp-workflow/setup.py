from pybind11.setup_helpers import Pybind11Extension
from setuptools import setup

exts = [Pybind11Extension(
    "tictactoe",
    ["cpp/src/Tictactoe.cpp", "cpp/src/TictactoeBinding.cpp"]
    )]

setup(
    name = 'tictactoe-gui',
    version = '0.1.0',
    ext_modules = exts,
    scripts = ['src/tictactoe_gui.py']
    )


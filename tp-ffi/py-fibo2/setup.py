from setuptools import setup, Extension

exts = [Extension('myfibo', ['cpp/myfibo.cpp'])]

setup(
    name = 'py-fibo2',
    version = '0.1.0',
    ext_modules = exts,
    scripts = [
        'scripts/main1.py',
        'scripts/main2.py',
        'scripts/main3.py'
        ]
    )


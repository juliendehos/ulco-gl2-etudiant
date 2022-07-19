from setuptools import setup, Extension

exts = [Extension('Logger', [
    'cpp/Logger.cpp',
    'cpp/LoggerBinding.cpp'
    ])]

setup(
    name = 'py-logger',
    version = '0.1.0',
    ext_modules = exts,
    scripts = [
        'scripts/main1.py',
        ]
    )


from setuptools import setup,Extension
from Cython.Build import cythonize

extensions = [
    Extension("flames_module",sources=["flames_module.pyx","flames.cpp"],language="c++"),
]

setup(
    ext_modules=cythonize(extensions),
)
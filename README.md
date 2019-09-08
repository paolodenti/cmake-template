# CMake template for C++

This is a working and customizable template for C++ project using cmake.

Features included in the template are:

* Multi program and multi library
* program 1 (`prog1`) self contained, no library used
* program 2 (`prog2`) using 2 internal project libraries and Boost
* 1 Internal convenience library (just for organizational purposes) (`lib1`)
* 1 Shared Library (`lib2`)
* An external linked library (`ncurses`) used by the shared library. `ncurses` must be present available in order to compile the template as it is (`sudo apt-get install libncurses5-dev`)
* C program is statically linked to the internal library and dynamically linked to the installable one
* `.gitignore` excludes the automatically generated files

# For developers

## Customize the template package
* `git clone` the repo
* customize `CMakeLists.txt` (optional)

## build the package
```
mkdir build && cd build
cmake ..
make
```

## Run programs

```
./prog1
./prog2
```

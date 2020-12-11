cmake-test
==========
![Status](https://github.com/makestuff/cmake-test/workflows/CI/badge.svg)

This is meant to be a minimal project with CMake build and GoogleTest tests,
which builds in CI on GitHub on Linux and Windows. The GoogleTest repo is just a
git submodule, and is built together with the project itself. The top-level
`CMakeLists.txt` just sets compiler options and then imports the components: a
shared library called `libfoo` and a command-line tool `app` which is based on
it.

    cmake-test
    │
    ├── README.md
    ├── build.sh
    ├── build.cmd
    ├── CMakeLists.txt
    │
    ├── app
    │   ├── CMakeLists.txt
    │   └── main.cpp
    │
    ├── libfoo
    │   ├── CMakeLists.txt
    │   ├── include
    │   │   └── foo
    │   │       ├── dllexport.h
    │   │       └── mul.h
    │   ├── src
    │   │   └── mul.cpp
    │   └── tests
    │       ├── CMakeLists.txt
    │       ├── main.cpp
    │       └── testMul.cpp
    │
    └── googletest
        └── ...


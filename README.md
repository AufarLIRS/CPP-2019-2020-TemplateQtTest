# CPP-2019-2020-TemplateQtTest

Template repo with:
- QtDemo - simple Qt App
- GUITests - QtTesting project with access to GUI and testing capabilities
- LogicalTests - GoogleTest project with Tests of internal logic

# Features

- 2 different testing frameworks used for Qt GUI project
- GoogleTest has 2 test suits in distinct files
- QtTesting has 2 test suits in united project; both suits are in subprojects
- QtTesting uses `init()` method to reset data between testing scenarios

# Build

## Ubuntu

1) GTest needs to installed using these commands:
```bash
sudo apt install libgtest-dev
cd /usr/src/gtest/
sudo cmake -DBUILD_SHARED_LIBS=ON
sudo make
sudo cp *.so /usr/lib
```
2) Run "LogicalTests" project to see GTest working

## Windows

GTest must be installed manually:
1) Download GTest from official repo: https://github.com/google/googletest
2) Open downloaded project in Qt Creator ("File" -> "Open File or Project" -> Choose CMakeLists.txt of GTest project)
3) Build GTest project
4) Go to build folder
5) In build folder, find "gtest/lib" folder with "libgtest.a" file in it
6) Copy this file to QtTest project's "LogicalTests/include/lib" folder
7) Run "LogicalTests" project to see GTest working

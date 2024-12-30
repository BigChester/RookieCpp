# RookieCpp

This is a repo for C++ learning...

## Prject Architecture

- Essential C++ (Partly)
- Effective C++ (Continuously)
- Design Pattern (Continuously)

## Install Compiler Environment on Windows x64

### Steps

- Install `Visual Studio Code`
- Install `C/C++` & `C/C++ Externtion Pack` in VS Code
- Download C/C++ compiler [MinGW-w64](https://sourceforge.net/projects/mingw-w64/files/latest/download) and unzip it into the specified location
- Open `C/C++ Configuration` in VS Code and add the `g++.exe` to the `compilerPath`
- Write your first C++ file `HelloWorld.cpp` and try to compile/run it

### Tips

#### C++ Head Files Includepath Warnings

- If VS Code hints that you didn't include basic head file correctly (like \<iostream>), but you can run the C++ code succussfully. Try type the code as follows on the Terminal.

```bash
.\g++.exe -v -E -x c++ -
```

- Then include the system head files in `C/C++ Configurations`.

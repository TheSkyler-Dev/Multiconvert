# Multiconvert
Multiconvert is a terminal-based scientific unit converter that can convert time, temperature and mass, as well as calculate the surface area and volume of spheres.

## Dependencies

To build and run this project, you will need the following:

- **C++ Compiler**: `g++` or `clang++` (part of MinGW on Windows) or equivalent
- **CMake**: Version 3.30.3 or higher

Note: This is because Multiconvert, specifically its `CMakeLists`, has `g++` and `clang++` specified within it.

**Please make sure `CMakeLists.txt` is located in the same directory as the source file during compilation due to the use of relative paths.**

### Installation Instructions

1. **Install `g++` and `CMake`**:

   - **On Windows**:
     - Download and install [MinGW](https://www.mingw-w64.org/) to get `g++`.
     - Download and install [CMake](https://cmake.org/download/).

   - **On Linux**:
     - Use your package manager to install `g++` and `CMake`. For example, on Debian-based systems:
       ```bash
       sudo apt-get install g++ cmake
       ```

   - **On macOS**:
     - Install `g++` via [Homebrew](https://brew.sh/):
       ```bash
       brew install gcc
       ```
     - Install `CMake` via Homebrew:
       ```bash
       brew install cmake
       ```

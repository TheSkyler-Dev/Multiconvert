# Multiconvert
Multiconvert is a procedurally coded, terminal-based scientific unit converter that can convert time, temperature and mass.

## Dependencies

To build and run this project, you will need the following:

- **C++ Compiler**: `g++` (part of MinGW on Windows) or equivalent
- **CMake**: Version 3.30.3 or higher

Note: This is because Multiconvert, specifically its `CMakeLists`, has `g++` specified within it.

**Please make sure `CMakeLists.txt` is located in the same directory as the source file during compilation.**

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

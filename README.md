![Static Badge](https://img.shields.io/badge/License-GPL%20v3.0-blue?style=flat)
![Static Badge](https://img.shields.io/badge/Latest%20version-v1.0.0rc.1-orange?style=flat)

# Multiconvert
A comprehensive C++ unit conversion tool supporting multiple measurement types including:
- Physical units (length, mass, volume, time)
- Temperature
- Speed and Energy
- Digital storage
- Electrical measurements
- Geometric calculations

## Dependencies (only if you intend to build/compile from source, recommended when testing contributions)

To build and run this project, you will need the following:

- **A C++ Compiler** that supports C++ 17 or later (e.g. `g++`, `clang/clang++`, `MSVC` etc.)
- **CMake**: Version 3.16.0 or higher

Note: This project should be cross-compatible since `CMakeLists.txt` is set to automatically detect any compatible compilers.

**Please make sure `CMakeLists.txt` is located in the same directory as the source file during compilation due to the use of relative paths.**

### Installation Instructions

1. **Install C++ Compiler and CMake**:

   - **Windows**: Install a C++ compiler such as MinGW or Visual Studio, and download CMake from [CMake.org](https://cmake.org/download/).
   - **Linux**: Use your package manager to install a C++ compiler and CMake. For example:
     ```bash
     sudo apt-get install build-essential cmake
     ```
   - **macOS**: Install a C++ compiler and CMake via [Homebrew](https://brew.sh/):
     ```bash
     brew install gcc cmake
     ```

   **Please note that all releases since v0.9.0-alpha only include binaries (`.exe`, `.deb` etc.) and/or archives (`.zip`, `.tar.gz`)
   after v0.9.0-alpha, the source code will be added as file archives to the release.** 

## Contributing
We welcome contributions! Here's how you can help:
- Bug fixes
- New conversion types
- Optimization improvements
- Better error handling
- Tests

See [CONTRIBUTING.md](https://github.com/TheSkyler-Dev/Multiconvert/blob/main/CONTRIBUTING.md) for detailed guidelines.

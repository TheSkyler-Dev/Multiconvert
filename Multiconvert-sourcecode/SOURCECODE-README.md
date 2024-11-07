# Multiconvert v0.9.0-alpha
A comprehensive C++ unit conversion tool supporting multiple measurement types including:
- Physical units (length, mass, volume, time)
- Temperature
- Speed and Energy
- Digital storage
- Electrical measurements
- Geometric calculations

## Multiconvert-sourcecode guide:
This document intends to clarify how this folder is structured.  
You'll find the following files in these directories:
- **Main source code and CMakeLists**: (root directory of this folder)
- **Header files**: `~\include`
- **Class implementations**: `~\implementations`
This has been done to clean up the root directory. Move all files from `~\implementations` into the root directory of this folder  
BEFORE attempting to compile Multiconvert from source! This is because `CMakeLists.txt` is set up to assume that the implementation  
files are in the root directory of whatever folder. There's no need to move the headers into the root directory. `CMakeLists.txt`
has already been setup to access them from the `include` directory.
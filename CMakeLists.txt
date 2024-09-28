cmake_minimum_required(VERSION 3.30.3)

project(Multiconvert VERSION 0.4.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
find_program(CXX_COMPILER NAMES g++ clang++)

if (CXX_COMPILER)
    set(CMAKE_CXX_COMPILER ${CXX_COMPILER})
else()
    message(FATAL_ERROR "C++ compiler not found")
endif()

set(CMAKE_BUILD_TYPE Debug)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)
message(STATUS "Include directories: ${PROJECT_SOURCE_DIR}/include")

add_executable(Multiconvert 
Multiconvert_v0.4.0-alpha.cpp
Menu.cpp
Timeconvert.cpp
Temperature.cpp
ConsoleManager.cpp
Mass.cpp
)

set_target_properties(Multiconvert PROPERTIES WIN32_EXECUTABLE OFF)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
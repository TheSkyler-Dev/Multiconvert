cmake_minimum_required(VERSION 3.16.0)

project(Multiconvert VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include_directories(${PROJECT_SOURCE_DIR}/include)

set(SOURCES
    Multiconvert_v1.0.0-rc.1.cpp
    Menu.cpp
    Timeconvert.cpp
    Temperature.cpp
    ConsoleManager.cpp
    Mass.cpp
    Length.cpp
    Volume.cpp
    Speed.cpp
    Data.cpp
    Voltages.cpp
    Energy.cpp
    Spheres.cpp
    About.cpp
)

add_executable(Multiconvert ${SOURCES})

target_precompile_headers(Multiconvert PRIVATE
    <iostream>
    <string>
    <thread>
    <chrono>
    <stdexcept>
)

if(MSVC)
  target_compile_options(Multiconvert PRIVATE /W4)
else()
  target_compile_options(Multiconvert PRIVATE -Wall -Wextra -Wpedantic)
endif()

install(TARGETS Multiconvert DESTINATION bin)

message(STATUS "Build type: ${CMAKE_BUILD_TYPE}")
message(STATUS "Compiler: ${CMAKE_CXX_COMPILER_ID}")
message(STATUS "Include directories: ${PROJECT_SOURCE_DIR}/include")
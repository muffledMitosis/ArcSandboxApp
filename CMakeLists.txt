cmake_minimum_required(VERSION 3.3)
project(SandboxApp)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

add_subdirectory(./libs/ArcEngine/)

add_executable(SandboxApp ./src/SandboxApp.cpp)
target_include_directories(SandboxApp PUBLIC ./libs/ArcEngine/src/)
target_link_libraries(SandboxApp PRIVATE ArcEngine)
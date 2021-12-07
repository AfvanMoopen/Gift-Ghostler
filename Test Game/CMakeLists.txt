cmake_minimum_required(VERSION 2.8)     # Version 3.1 required

set(CMAKE_CXX_FLAGS "-std=c++14")

file(GLOB_RECURSE SOURCES               # Fetch all of the Test Game's Srcs
    ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp
)

add_executable(                         # Create the Test Game Executable
    SealTestGame ${SOURCES})

target_link_libraries(                  # Link Test Game to the core Engine
    SealTestGame LINK_PUBLIC SealGameEngine)

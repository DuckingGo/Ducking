cmake_minimum_required(VERSION 3.10)

project(DukcyGo C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCE_FILES
    src/guessing.c
)

add_executable(DuckyGo ${SOURCE_FILES})

if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g -Wall -Wextra)
endif()

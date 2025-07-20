cmake_minimum_required(VERSION 3.10)

# Nama proyek dan standar C yang digunakan
project(DukcyGo C)
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Include direktori header
include_directories(include)

# File sumber utama
set(SOURCE_FILES
    src/main.c
    # Tambahkan file sumber lain di sini jika ada
)

# Membuat executable
add_executable(DukcyGo ${SOURCE_FILES})

# Opsi tambahan untuk debugging (opsional)
if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    add_compile_options(-g -Wall -Wextra)
endif()
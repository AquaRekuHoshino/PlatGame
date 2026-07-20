cmake_minimum_required(VERSION 3.10)
project(PlatGame)

set(CMAKE_CXX_STANDARD 20)

# Raylib configuration
set(RAYLIB_DIR ${CMAKE_CURRENT_SOURCE_DIR}/libraylib)
set(RAYLIB_INCLUDE_DIR ${RAYLIB_DIR}/include)
set(RAYLIB_LIBRARY ${RAYLIB_DIR}/libraylib.a)

add_executable(${PROJECT_NAME} main.cpp
        src/Player/player.cpp
        src/Player/player.h
        src/obj/floor.cpp
        src/obj/floor.h)

target_include_directories(${PROJECT_NAME} PRIVATE ${RAYLIB_INCLUDE_DIR})
target_link_libraries(${PROJECT_NAME} PRIVATE ${RAYLIB_LIBRARY})

# Windows-specific dependencies
if(WIN32)
    target_link_libraries(${PROJECT_NAME} PRIVATE winmm gdi32 opengl32)
endif()
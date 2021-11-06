cmake_minimum_required(VERSION 3.10)

if(WIN32)
    message(STATUS "Buile for Windows")
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
    
    set(SDL_DIR E:/program/SDL2-2.0.16/SDL2)


    include_directories(${SDL_DIR}/include)
    link_directories(${SDL_DIR}/bin)

    message(STATUS "SDL Lib Path: "${SDL_DIR}/include)
endif()


project(Media_Network)

file(GLOB SRC src/*.c src/*.h)

add_executable(${PROJECT_NAME} ${SRC})
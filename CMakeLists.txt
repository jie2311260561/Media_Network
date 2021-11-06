cmake_minimum_required(VERSION 3.10)

message(STATUS "operation system is "${CMAKE_SYSTEM})

if(WIN32)
    message(STATUS "Buile for Windows")
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")

#    include(${CMAKE_SOURCE_DIR}/lib/SLD2/lib/cmake/SDL2/sdl2-config.cmake)

    set(SDL2_DIR E:/program/media_-network/lib/SLD2)
    include_directories(${SDL2_DIR}/include)

    link_directories(${SDL2_DIR}/bin)
elseif(UNIX)
    message(STATUS "Build for Unix")
    
    
endif()

project(Media_Network)


file(GLOB SRC src/media-main/src/*.c src/media-main/src/*.h)

add_executable(${PROJECT_NAME} ${SRC})

target_link_libraries(${PROJECT_NAME} mingw32 SDL2)
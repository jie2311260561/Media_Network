cmake_minimum_required(VERSION 3.10)

project(Media_Network)

file(GLOB SRC src/*.c src/*.h)

add_executable(${PROJECT_NAME} ${SRC})
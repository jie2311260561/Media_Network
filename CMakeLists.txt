cmake_minimum_required(VERSION 3.10)


project(Media_Network)

if(WIN32)
    message(STATUS "Buile for Windows")
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")
    SET(CMAKE_INSTALL_PREFIX "${CMAKE_SOURCE_DIR}/build/install")

#    set(CMAKE_C_FLAGS "-Umain")
    include(${CMAKE_SOURCE_DIR}/lib/SLD2/lib/cmake/SDL2/sdl2-config.cmake)

    set(SDL2_DIR E:/program/media_-network/lib/SLD2)
    include_directories(${SDL2_DIR}/include)
    include_directories(src/win_media_video)

    file(GLOB WIN_MEDIA_SRC src/win_media_video/*.c src/win_media_video/*.h)

    file(GLOB SRC src/media-main/src/*.c src/media-main/src/*.h)

    link_directories(${SDL2_DIR}/lib)

#    find_library(SDL2_LIB libSDL2 lib/SDL2/lib NO_DEFAULT_PATH)

    message(STATUS ${SDL2_LIB})
    message(STATUS ${SDL2_DIR})
    add_definitions(-DCOMPILE_WINDOWS_TEST)
    add_executable(${PROJECT_NAME} ${SRC} ${WIN_MEDIA_SRC})


    target_link_libraries(${PROJECT_NAME} mingw32 SDL2)

    install(TARGETS ${PROJECT_NAME} 
            RUNTIME DESTINATION bin)
    install (FILES ${SDL2_DIR}/bin/SDL2.dll DESTINATION bin)

elseif(UNIX)

    message(STATUS "Build for Unix")
    set(CMAKE_C_COMPILER "gcc")
    set(CMAKE_CXX_COMPILER "g++")

    file(GLOB SRC src/media-main/src/*.c src/media-main/src/*.h)
    
endif()





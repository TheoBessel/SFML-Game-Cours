cmake_minimum_required(VERSION 3.13)

## Project
set(CMAKE_CXX_STANDARD 17)
set(PROJECT_NAME "SFML_Game_Tutorial")
project(${PROJECT_NAME})
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")

#set(SFML_STATIC_LIBRARIES TRUE)
find_package(SFML 2.5 COMPONENTS system window graphics audio REQUIRED)

add_executable(${PROJECT_NAME} main.cpp)
target_link_libraries(${PROJECT_NAME} sfml-system sfml-window sfml-graphics sfml-audio)
set (CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
set (CMAKE_LINKER_FLAGS_DEBUG "${CMAKE_LINKER_FLAGS_DEBUG} -fno-omit-frame-pointer -fsanitize=address")
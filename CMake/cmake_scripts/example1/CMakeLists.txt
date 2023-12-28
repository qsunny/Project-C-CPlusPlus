#[[ 这是一个 CMakeLists.txt 文件。
这是一个 CMakeLists.txt 文件
这是一个 CMakeLists.txt 文件]]


cmake_minimum_required(VERSION 3.16)
project (example1)

set(CMAKE_CXX_STANDARD 11)
# set(SRC_LIST main.cpp)
set(OUTPUT_HOME /data/temp)
set(EXECUTABLE_OUTPUT_PATH ${OUTPUT_HOME}/)

# aux_source_directory(${PROJECT_SOURCE_DIR} SRC)
# file(GLOB SRC ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp)
file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
# file(GLOB MAIN_HEAD ${CMAKE_CURRENT_SOURCE_DIR}/include/*.h)

include_directories(${PROJECT_SOURCE_DIR}/include)
add_executable(main ${SRC_LIST})



#[[静态链接库 ]]


cmake_minimum_required(VERSION 3.16)
project (example3)

set(CMAKE_CXX_STANDARD 11)


file(GLOB SRC_LIST ${CMAKE_CURRENT_SOURCE_DIR}/src/*.cpp)
include_directories(${PROJECT_SOURCE_DIR}/include)

set(OUTPUT_HOME /data/temp)
set(EXECUTABLE_OUTPUT_PATH ${OUTPUT_HOME}/)

# 包含静态库路径
link_directories(${PROJECT_SOURCE_DIR}/lib)
# 链接静态库  指定要链接的动态库的路径
# link_libraries(calc)
add_executable(main ${SRC_LIST})

# 指定可执行程序要链接的动态库名字
target_link_libraries(main pthread calc)

# 输出一般日志信息
message(STATUS "source path: ${PROJECT_SOURCE_DIR}")
# 输出警告信息
message(WARNING "source path: ${PROJECT_SOURCE_DIR}")
# 输出错误信息
# message(FATAL_ERROR "source path: ${PROJECT_SOURCE_DIR}")


set(TEMP "hello,world")
file(GLOB SRC_1 ${PROJECT_SOURCE_DIR}/src1/*.cpp)
file(GLOB SRC_2 ${PROJECT_SOURCE_DIR}/src2/*.cpp)
# 追加(拼接)
set(SRC_1 ${SRC_1} ${SRC_2} ${TEMP})
message(STATUS "message: ${SRC_1}")

# 追加(拼接)
list(APPEND SRC_1 ${SRC_1} ${SRC_2} ${TEMP})
message(STATUS "message: ${SRC_1}")





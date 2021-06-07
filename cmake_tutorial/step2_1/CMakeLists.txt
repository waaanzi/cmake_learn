# 设置CMake最低版本
cmake_minimum_required(VERSION 3.16)

# 设置项目名称及版本
project(Tutorial VERSION 1.0 LANGUAGES CXX)

# 设置语言标准,此处为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成库
add_subdirectory(MathFunctions)

# 生成可执行文件
add_executable(Tutorial main.cc)

# 链接库
target_link_libraries(Tutorial PUBLIC MathFunctions)

message("PROJECT_SOURCE_DIR=${PROJECT_SOURCE_DIR}")

# 增加include路径到目标
target_include_directories(Tutorial PUBLIC "${PROJECT_SOURCE_DIR}/MathFunctions/")
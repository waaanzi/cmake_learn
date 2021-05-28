# 设置CMake最低版本
cmake_minimum_required(VERSION 3.16)

# 设置项目名称及版本
project(Tutorial VERSION 1.0)

# 设置语言标准,此处为C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 生成可执行文件
add_executable(Tutorial main.cc)
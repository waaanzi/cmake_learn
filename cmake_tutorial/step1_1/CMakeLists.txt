# 设置CMake最低版本
cmake_minimum_required(VERSION 3.16)

# 设置项目名称及版本
project(Tutorial VERSION 1.0)
# 可仅设置项目名称
# project(Tutorial)

# 生成可执行文件
add_executable(Tutorial main.cc)
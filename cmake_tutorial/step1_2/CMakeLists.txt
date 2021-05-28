# 设置CMake最低版本
cmake_minimum_required(VERSION 3.16)

# 设置项目名称及版本
project(Tutorial VERSION 1.0)

# 生成可执行文件
add_executable(Tutorial main.cc)

# ---------------------------------------------------add
# 配置文件：拷贝文件到另一位置，并且修改其内容
configure_file(TutorialConfig.h.in TutorialConfig.h)
# 打印信息
message("PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")
# 增加include路径到目标，否则会无法include生成的TutorialConfig.h
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")
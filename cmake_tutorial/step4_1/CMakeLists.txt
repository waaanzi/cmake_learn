# 设置CMake最低版本
cmake_minimum_required(VERSION 3.16)

# 设置项目名称及版本
project(Tutorial VERSION 1.0)

# 生成可执行文件
add_executable(Tutorial main.cc)

# 设置选项
option(USE_MYMATH "use Turotial math" ON)

# 配置文件：拷贝文件到另一位置，并且修改其内容
configure_file(TutorialConfig.h.in TutorialConfig.h)

if(USE_MYMATH)
  add_subdirectory(MathFunctions)
  list(APPEND extra_libs MathFunctions)
endif()

target_link_libraries(Tutorial PUBLIC ${extra_libs})

# 打印信息
message("PROJECT_BINARY_DIR=${PROJECT_BINARY_DIR}")

# 增加include路径到目标，否则会无法include生成的TutorialConfig.h
target_include_directories(Tutorial PUBLIC "${PROJECT_BINARY_DIR}")

# ---add 
install(TARGETS Tutorial DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h" DESTINATION include)
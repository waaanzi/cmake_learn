add_library(MathFunctions mysqrt.cc)

# add
# state that anybody linking to MathFunctions needs to include the current source directory,
# while MathFunctions itself doesn't
# 即链接方不需处理包含MathFunctions源文件目录
target_include_directories(MathFunctions
          INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
          )
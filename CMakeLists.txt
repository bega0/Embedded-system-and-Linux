
cmake_minimum_required(VERSION 3.16)// 最低版本要求

project(sensor_demo C)// 项目名称

set(CMAKE_C_STANDARD 11)// C语言标准

add_executable(sensor_demo
    src/main.c
    src/sensor.c
)// 源文件

target_include_directories(sensor_demo
    PRIVATE include
)// 头文件目录

target_compile_options(sensor_demo
    PRIVATE -Wall -Wextra
)// 编译选项

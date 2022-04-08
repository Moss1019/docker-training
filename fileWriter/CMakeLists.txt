cmake_minimum_required(VERSION 3.16)
project(FileWriter)

add_library(fileHandler ../shared/filehandler.cpp)
add_executable(fileWriter main.cpp)

target_link_libraries(fileWriter PRIVATE fileHandler)

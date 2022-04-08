cmake_minimum_required(VERSION 3.16)
project(FileReader)

add_library(fileHandler ../shared/filehandler.cpp)
add_executable(fileReader main.cpp)

target_link_libraries(fileReader PRIVATE fileHandler)

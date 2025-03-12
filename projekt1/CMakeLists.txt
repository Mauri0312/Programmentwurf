cmake_minimum_required(VERSION 3.20)
project(projektentwurf) # name of the project
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True) #CMake standard 11 required
add_compile_options(-Wall -Wextra -pedantic) #compiler options added
add_executable(projektentwurf main.c developer.c developer_group.c) # merge all documents into the name projektentwurf

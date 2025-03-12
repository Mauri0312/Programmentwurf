cmake_minimum_required(VERSION 3.20)
project(projektentwurf)
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic)
add_executable(projektentwurf main.c developer.c developer_group.c) #wekfmwlde


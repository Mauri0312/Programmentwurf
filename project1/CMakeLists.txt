cmake_minimum_required(VERSION 3.20)
project(exam)                                                           #name of the project
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)                                     #CMake standard 11 required
add_compile_options(-Wall -Wextra -pedantic)                            #compiler options added
add_executable(exam src/main.c src/developer.c src/developer_group.c)   #merge all documents into the name projektentwurf
target_include_directories(exam PUBLIC include)                         #include the include folder
add_library(exam_lib STATIC src/developer.c src/developer_group.c)      #create a static library
target_include_directories(exam_lib PUBLIC include)                     #include the include folder
target_link_libraries(exam exam_lib)                                    #link the library to the project
cmake_minimum_required(VERSION 3.26)
project(Aulas C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Ponteiros)

add_executable(Aulas
        Ponteiros/ponteiros1.0.c
)
add_executable(Aulas1
        Ponteiros/ponteiros2.0.c
)

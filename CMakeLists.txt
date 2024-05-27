cmake_minimum_required(VERSION 3.26)
project(Aulas C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Ponteiros)

add_executable(Ponteiro1
        Ponteiros/ponteiros1.0.c
        Ponteiros/ponteiros3.0.c
        Ponteiros/ponteiros3.1.c
)
add_executable(Ponteiro2
        Ponteiros/ponteiros2.0.c
        Ponteiros/ponteiros3.0.c
)
add_executable(Ponteiro3
        Ponteiros/ponteiros3.0.c
        Ponteiros/ponteiros3.0.c
)
add_executable(ponteiro3.1
        Ponteiros/ponteiros3.1.c)

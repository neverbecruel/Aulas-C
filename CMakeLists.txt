cmake_minimum_required(VERSION 3.26)
project(Aulas C)

set(CMAKE_C_STANDARD 11)

include_directories(.)
include_directories(Ponteiros)
include_directories(Pilhas)

add_executable(Ponteiro1
        Ponteiros/ponteiros1.0.c

)
add_executable(Ponteiro2
        Ponteiros/ponteiros2.0.c

)
add_executable(Ponteiro3
        Ponteiros/ponteiros3.0.c
)
add_executable(ponteiro3.1
        Ponteiros/ponteiros3.1.c)

add_executable(TESTES
        Ponteiros/teste.c)

add_executable(Pilhas1.0
        Pilhas/Pilhas1.0.c
        Pilhas/Pilhas1.0.c
        Filas/queues1.0.c
)

add_executable(Queues1
        Filas/queues1.0.c
)

add_executable(ListasEncadeadas
        ListasEncadeadas/ListaEncadeada.c
)

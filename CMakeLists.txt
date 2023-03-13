cmake_minimum_required(VERSION 3.24)
project(Ordenacao_Decrescente C)

set(CMAKE_C_STANDARD 11)

add_executable(Ordenacao_Decrescente main.c ordenacao.c ordenacao.h printArray.c printArray.h numOps.c numOps.h)

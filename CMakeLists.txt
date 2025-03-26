cmake_minimum_required(VERSION 3.30)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        PaginaWeb.cpp
        PaginaWeb.h
        chatGPT.cpp
        chatGPT.h
        Libro.cpp
        Libro.h
        Informacion.cpp
        Informacion.h
        Estructura.h
        Estudiante.cpp
        Estudiante.h)

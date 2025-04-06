cmake_minimum_required(VERSION 3.30)
project(Laboratorio)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Laboratorio
    chatGPT.cpp
    chatGPT.h
    Estructura.h
    Estudiante.cpp
    Estudiante.h
    Informacion.cpp
    Informacion.h
    Libro.cpp
    Libro.h
    main.cpp
    PaginaWeb.cpp
    PaginaWeb.h
        DTInfoEstudiante.cpp
        DTInfoEstudiante.h)

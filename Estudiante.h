
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

#include "Informacion.h"

using namespace std;



class Estudiante {
public:
    Estudiante();//mantenemos 2 constructores, uno por defecto vacio que nos permite asignarle valor mas tarde a las variables
    Estudiante(string nombre, int ci, string email);//agrego constructor con parametros
    virtual ~Estudiante();
private:
    string nombre;
    int ci;
    string email;
    Informacion* guardado_por;
};

#endif
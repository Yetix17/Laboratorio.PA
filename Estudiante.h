
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>
#include <vector>

#include "Informacion.h"

using namespace std;

class Informacion;// Declaración adelantada para evitar dependencias circulares

class Estudiante {
public:
    Estudiante();//mantenemos 2 constructores, uno por defecto vacio que nos permite asignarle valor mas tarde a las variables
    Estudiante(string nombre, int ci, string email);//agrego constructor con parametros
    virtual ~Estudiante();

    //para conectar paracada estudiante distintas informaciones necesitamos:
    void agregarInformacion(Informacion* info);// Agregar relación con Informacion
    void listarInfo();


    string toString();

private:
    string nombre;
    int ci;
    string email;
    vector<Informacion*> infos;// Ahora puede almacenar múltiples informaciones
};

#endif
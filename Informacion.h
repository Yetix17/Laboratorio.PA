
#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>
#include <vector>

#include "Estructura.h"
#include "Estudiante.h"

using namespace std;

class Estudiante;// Declaración adelantada para evitar dependencias circulares

class Informacion {
public:
    Informacion(int, fecha);
    virtual ~Informacion();
    void agregarEstudiante(Estudiante* estud);
    void mostrarEstudiantes();
    string toString();

private:

protected:
    int id;
    fecha date;
    vector<Estudiante*> estuds;// Lista de estudiantes vinculados
};

#endif
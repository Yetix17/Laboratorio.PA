

#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

#include "Informacion.h"

using namespace std;



class Estudiante {
public:
    Estudiante();
    virtual ~Estudiante();
private:
    string nombre;
    int ci;
    string email;
    Informacion* guardado_por;
};



#endif //ESTUDIANTE_H


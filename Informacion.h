
#ifndef INFORMACION_H
#define INFORMACION_H
#include <string>

#include "Estructura.h"

using namespace std;



class Informacion {
public:
    Informacion(int, fecha);
    virtual ~Informacion();
    string toString();

private:

protected:
    int id;
    fecha date;
};


#endif
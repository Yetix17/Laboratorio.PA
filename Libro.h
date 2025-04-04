
#ifndef LIBRO_H
#define LIBRO_H
#include "Informacion.h"
#include <set>

using namespace std;



class Libro: public Informacion {
public:
    Libro(int, fecha, string titulo, string autores, string resumen);
    virtual ~Libro();
    string toString();
private:
    string titulo;
    string autores;
    string resumen;
};


#endif

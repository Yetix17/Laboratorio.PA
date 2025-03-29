
#include "Estudiante.h"

Estudiante::Estudiante(string nombre, int ci, string email) {
    this->nombre = nombre;
    this->ci = ci;
    this->email = email;
    this->guardado_por=nullptr;
}

//destructor se mantiene vacio aca abajo
Estudiante::~Estudiante() {
}
//

string Estudiante::toString() {
    return "Nombre :" + nombre + "\n" + "CI: " + to_string(ci) + "\n" + "email: "+ email ;
}
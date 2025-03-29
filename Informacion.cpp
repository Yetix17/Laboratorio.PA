
#include "Informacion.h"

Informacion::Informacion(int id, fecha date) {
    this->id = id;
    this->date = date;

}

Informacion::~Informacion() {
}

string Informacion::toString() {
<<<<<<< HEAD
    return ("id :" + to_string(id) + "\n" + "fecha: " + to_string(date.dia) + "/" + to_string(date.mes) + "/" + to_string(date.anio));
}


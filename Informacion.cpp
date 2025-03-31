
#include "Informacion.h"

#include <iostream>
#include <ostream>

Informacion::Informacion(int id, fecha date) {
    this->id = id;
    this->date = date;

}

Informacion::~Informacion() {
}

string Informacion::toString() {
// HEAD
    return ("id :" + to_string(id) + "\n" + "fecha: " + to_string(date.dia) + "/" + to_string(date.mes) + "/" + to_string(date.anio));
}

void Informacion::agregarEstudiante(Estudiante *estud) {
    if (estud == nullptr) return;
    for (Estudiante* e : estuds) {
        if (e == estud) return;  // Si ya existe, no lo agregamos
    }
    estuds.push_back(estud);
    // Este metodo agrega un puntero al vector estuds
}

void Informacion::mostrarEstudiantes() {
    cout << "Informacion ID " << id << " ha sido guardada por los siguientes estudiantes:\n";
    for (Estudiante* e : estuds) {
        cout<<"- " << e->toString() <<endl;
    }

}



#include "Estudiante.h"

#include <iostream>
#include <ostream>

Estudiante::Estudiante(string nombre, int ci, string email) {
    this->nombre = nombre;
    this->ci = ci;
    this->email = email;

}

//destructor se mantiene vacio aca abajo
Estudiante::~Estudiante() {
}
//

string Estudiante::toString() {
    return "Nombre: " + nombre + "\n" + "CI: " + to_string(ci) + "\n" + "email: "+ email ;
}

void Estudiante::agregarInformacion(Informacion* info) {
    if (info == nullptr) return;//si es null no se agrega
    for (Informacion* i : infos) {
        if (i == info) return;  // Si ya existe, no se agrega
    }
    infos.push_back(info);// guarda la informacion en el estudiante
    info->agregarEstudiante(this);//enlaza tambien en Informacion
}

void Estudiante::listarInfo() {
    cout<<"Estudiante: "<<nombre << " ha guardado las siguientes informaciones: \n";
    for (Informacion* i : infos) {
        cout<<"- " << i->toString() <<endl;
    }
}

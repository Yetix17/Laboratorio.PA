
#include "Libro.h"

Libro::Libro(int id, fecha date, string titulo, string autores, string resumen):Informacion(id, date) {
    this->titulo = titulo;
    this->autores = autores;
    this->resumen = resumen;

}

Libro::~Libro() {
}

string Libro::toString() {
    return ("\n" + Informacion::toString() + "\n" + "titulo: " + this->titulo + "\n" + "autores: " + this->autores + "\n" + "resumen: " + this->resumen + "\n");
}

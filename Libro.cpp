
#include "Libro.h"

Libro::Libro(string titulo, string autores, string resumen):Informacion(id, date) {
    this->titulo = titulo;
    this->autores = autores;
    this->resumen = resumen;

}

Libro::~Libro() {
}

string Libro::toString() {
    return (Informacion::toString() + "\n" + "título: " + this->titulo + "\n" + "autores: " + this->autores + "\n" + "resumen: " + this->resumen);
}

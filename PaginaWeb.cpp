
#include "PaginaWeb.h"

PaginaWeb::PaginaWeb(int id, fecha date, string titulo, string url, string texto):Informacion(id, date) {
    this->titulo = titulo;
    this->url = url;
    this->texto = texto;
}

PaginaWeb::~PaginaWeb() {
}

string PaginaWeb::toString() {
    return ("\n" +  Informacion::toString() + "\n" + "titulo: " + this->titulo + "\n" + "url: " + this->url + "\n" + "texto: " + this->texto + "\n");
}

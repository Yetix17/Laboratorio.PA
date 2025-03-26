

#include "PaginaWeb.h"

PaginaWeb::PaginaWeb(string titulo, string url, string texto) {
    this->titulo = titulo;
    this->url = url;
    this->texto = texto;
}

PaginaWeb::~PaginaWeb() {
}

string PaginaWeb::toString() {
    return (Informacion::toString() + "\n" + "título: " + this->titulo + "\n" + "url: " + this->url + "\n" + "texto: " + this->texto);
}

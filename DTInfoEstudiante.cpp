#include <DTInfoEstudiante.h>


DTInfoEstudiante::DTInfoEstudiante(string tituloInfo, string nombreEstudiante) {
    this->nombreEstudiante = nombreEstudiante;
    this->tituloInfo = tituloInfo;
}

void DTInfoEstudiante::mostrar() const {
    cout << "Info: " << tituloInfo << " Leído por: " << nombreEstudiante << endl;
}

bool DTInfoEstudiante::operator<(const DTInfoEstudiante& otro) const {
    if (tituloInfo != otro.tituloInfo)
        return tituloInfo < otro.tituloInfo;
    return nombreEstudiante < otro.nombreEstudiante;
}

for (Informacion* info : infos) {
    if (info != nullptr) {
        string texto = info->toString();

        if (texto.find("polimorfismo") != string npos || texto.find("Polimorfismo") != string npos) {
        }
    }
}
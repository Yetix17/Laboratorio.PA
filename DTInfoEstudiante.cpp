#include "DTInfoEstudiante.h"

void DTInfoEstudiante::mostrar() const {
    cout << "Info: " << tituloInfo << " Leído por: " << nombreEstudiante << endl;
}

bool DTInfoEstudiante::operator<(const DTInfoEstudiante& otro) const {
    if (tituloInfo != otro.tituloInfo)
        return tituloInfo < otro.tituloInfo;
    return nombreEstudiante < otro.nombreEstudiante;
}


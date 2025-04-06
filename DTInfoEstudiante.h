
#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H

#include <string>
#include <iostream>
#include <set>
#include <vector>

#include "Informacion.h"
using namespace std;

class DTInfoEstudiante {
private:
    string tituloInfo;
    string nombreEstudiante;
public:
    // Constructor
    DTInfoEstudiante(string tituloInfo, string nombreEstudiante);
    // Muestra el contenido
    void mostrar() const;

    // Compara dos objetos y los ordena
    bool operator<(const DTInfoEstudiante& otro) const;

    set<DTInfoEstudiante> infoPolimorfismo(vector<Informacion*> infos);
};
#endif //DTINFOESTUDIANTE_H
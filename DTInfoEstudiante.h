
#ifndef DTINFOESTUDIANTE_H
#define DTINFOESTUDIANTE_H

#include <string>
#include <iostream>
#include <set>
using namespace std;

class DTInfoEstudiante {
private:
    string tituloInfo;
    string nombreEstudiante;
public:
    // Constructor
    DTInfoEstudiante(string tituloInfo, string nombreEstudiante);
    // Muestra el contenido
    void mostrar() const {
        cout << "Info: " << tituloInfo << "Leído por: " << nombreEstudiante << endl;
    }
    // Compara dos objetos y los ordena
    bool operator<(const DTInfoEstudiante& otro) const {
        if (tituloInfo != otro.tituloInfo)
            return tituloInfo < otro.tituloInfo;
        return nombreEstudiante < otro.nombreEstudiante;
    }
    set<DTInfoEstudiante>
};
#endif //DTINFOESTUDIANTE_H
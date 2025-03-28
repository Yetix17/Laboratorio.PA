#include <iostream>

#include "Estudiante.h"
#include "Informacion.h"

using namespace std;

int main() {

    fecha date;
    date.dia=10, date.mes=20, date.anio=30;
    Informacion* info = new Informacion(12, date);
    Estudiante* estud = new Estudiante("Pedro",13,"predritovm@gmail.com");
    cout << info->toString();
    cout << estud->toString();
    return 0;
}
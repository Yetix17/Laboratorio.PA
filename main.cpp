#include <iostream>

#include "Informacion.h"

using namespace std;

int main() {

    fecha date;
    date.dia=10, date.mes=20, date.anio=30;
    Informacion* info = new Informacion(12, date);
//que andan manga de putos todos putos profe enseña algo por
    cout << info->toString();
    return 0;
}

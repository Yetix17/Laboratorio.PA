#ifndef PaginaWEB_H
#define PaginaWEB_H
#include <string>
#include "Informacion.h"

using namespace std;



class PaginaWeb: public Informacion {
public:
    PaginaWeb(int, fecha, string, string, string);
    virtual ~PaginaWeb();
    string toString();
private:
    string titulo;
    string url;
    string texto;

};


#endif

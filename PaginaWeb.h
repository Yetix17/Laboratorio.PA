
#ifndef PaginaWEB_H
#define PaginaWEB_H
#include "Informacion.h"
#include <string>

using namespace std;



class PaginaWeb:public Informacion {
public:
    PaginaWeb(string, string, string);
    virtual ~PaginaWeb();
    string toString();
private:
    string titulo;
    string url;
    string texto;

};



#endif //PaginaWEB_H

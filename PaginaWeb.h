
#ifndef PaginaWEB_H
#define PaginaWEB_H
#include <string>

using namespace std;



class PaginaWeb {
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

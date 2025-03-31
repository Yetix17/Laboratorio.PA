#include <string>
#include "Informacion.h"
#ifndef CHATGPT_H
#define CHATGPT_H

using namespace std;


class chatGPT: public Informacion {
public:
    chatGPT(int, fecha, string, string);
    virtual ~chatGPT();
    string toString();
private:
    string pregunta;
    string respuesta;

};

#endif

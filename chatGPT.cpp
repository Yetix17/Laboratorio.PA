
#include "chatGPT.h"

chatGPT::chatGPT(int id, fecha date, string pregunta, string respuesta): Informacion(id, date) {
    this->pregunta = pregunta;
    this->respuesta = respuesta;
}

chatGPT::~chatGPT() {
}

string chatGPT::toString() {
    return ("\n" + Informacion::toString() + "\n" + "Pregunta: " + this->pregunta + "\n" + "respuesta: " + this->respuesta + "\n");
}

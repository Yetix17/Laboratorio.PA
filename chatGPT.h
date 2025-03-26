#include <string>
#ifndef CHATGPT_H
#define CHATGPT_H

using namespace std;



class chatGPT {
public:
    chatGPT(string, string);
    virtual ~chatGPT();
    string toString();
private:
    string pregunta;
    string respuesta;

};


#endif //CHATGPT_H

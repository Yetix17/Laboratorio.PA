#include <iostream>
#include "Estudiante.h"
#include "Informacion.h"
#include "PaginaWeb.h"
#include "chatGPT.h"
#include "Libro.h"
#include "Estudiante.h"

using namespace std;

int main() {

    fecha date;
    date.dia=10, date.mes=20, date.anio=30;

    fecha datepag;
    datepag.dia = 7, datepag.mes = 3, datepag.anio = 2024;
    fecha datepag2;
    datepag2.dia = 5, datepag2.mes = 3, datepag.anio = 2024;

    fecha dateGPT;
    dateGPT.dia = 8, dateGPT.mes = 3, dateGPT.anio = 2024;
    fecha dateGPT2;
    dateGPT2.dia = 5, dateGPT2.mes = 3, dateGPT2.anio = 2024;

    fecha dateLibro;
    dateLibro.dia = 15, dateLibro.mes = 3, dateLibro.anio = 2024;

    Informacion* info = new Informacion(12, date);

    PaginaWeb* pag = new PaginaWeb(1, datepag, "Programación 4 Guía Semana 1 (4/3)", "https://eva.fing.edu.uy/pluginfile.php/468051/mod_resource/content/4/Guia01_P42024_IntroCBasicos.pdf", "el objetivo de es ta semana es contextualizar el paradigma de Orientación a Objetos (OO) en el marco de la Ingeniería de Software, así como comenzar a ver sus conceptos básicos y cómo éstos se implementan en C++.");

    PaginaWeb* pag2 = new PaginaWeb(2, datepag2, "Programación orientada a objetos", "https://es.wikipedia.org/wiki/Programaci%C3%B3n_orientada_a_objetos", "La programación orientada a objetos (POO, en español) es un paradigma de programación que parte del concepto de \"objetos\" como base, los cuales contienen información en forma de campos (a veces también referidos como atributos o propiedades) y código en forma de métodos. Algunas características clave de la programación orientada a objetos son herencia, cohesión, abstracción, polimorfismo, acoplamiento y encapsulamiento."); 

    chatGPT* gpt = new chatGPT(3, dateGPT, "Que es el polimorfismo en orientación a objetos?", "El polimorfismo en programación orientada a objetos se refiere a la capacidad de un objeto de tomar múltiples formas. Puede ser estático, resuelto en tiempo de compilación, basado en la herencia, o dinámico, resuelto en tiempo de ejecución, asociado a interfaces o métodos abstractos. En esencia, permite que objetos de diferentes clases respondan a la misma interfaz de manera coherente, facilitando la flexibilidad y extensibilidad del código.");

    chatGPT* gpt2 = new chatGPT(4, dateGPT2, "Que es el acoplamiento en orientacion a objetos?", "El acoplamiento en programación orientada a objetos se refiere al grado de dependencia entre las clases o módulos de un sistema. Un bajo acoplamiento es deseable, ya que implica que las clases son independientes entre sí, lo que facilita la modificación, mantenimiento y reutilización del código. Por otro lado, un alto acoplamiento indica una fuerte interdependencia entre las clases, lo que puede hacer que el sistema sea más difícil de entender, modificar y mantene.");

    Libro* librito = new Libro(5, dateLibro, " Applying UML and Patterns: An Introduction to Object-Oriented Analysis and Design and Iterative Development", "Craig Larman", "Applying UML and Patterns is the world’s #1 business and college introduction to “thinking in objects”―and using that insight in real-world object-oriented analysis and design. Building on two widely acclaimed previous editions, Craig Larman has updated this book to fully reflect the new UML 2 standard, to help you master the art of object design, and to promote high-impact, iterative, and skillful agile modeling practices.");
    
    Estudiante* est = new Estudiante("Alex Garcia", 52365899, "ag5678@gmail.com");
    Estudiante* est2 = new Estudiante("Betina Gonzalez", 49891239, "beg999@gmail.com");

   // cout << info->toString();
    //cout << pag->toString();
   // cout << pag2->toString();
   // cout << gpt->toString();
   // cout << gpt2->toString();
   // cout << librito->toString();
  //  cout << est->toString();
  //  cout << est2->toString();
  //  info->agregarEstudiante(est);//Asocio estudiante con informacion


    // Registrar relaciones
    est->agregarInformacion(info);
    est->agregarInformacion(pag2);
    est->agregarInformacion(librito);

    est2->agregarInformacion(librito);
    est2->agregarInformacion(pag);
    est2->agregarInformacion(gpt);


    // Mostrar qué informaciones ha guardado cada estudiante
    est->listarInfo();
    est2->listarInfo();

    // Mostrar qué estudiantes han guardado cada información
    librito->mostrarEstudiantes();
    gpt->mostrarEstudiantes();
//chupen
    return 0;
}

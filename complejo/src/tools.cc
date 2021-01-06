#include <iostream>
#include <cstring>

#include "tools.h"

using namespace std;

//*void Usage(int argc, char *argv[]) {
//    if (strcmp(argv[1], "--help" ) == 0) {
//        cerr << "El modo de uso de este programa es el siguiente: " << endl;
//        cerr << "No se deben introducir parametros por linea, solo el nombre del programa" << endl;
//        cerr << "El programa te pedira que introduzcas 2 numeros complejos, primero la parte real y luego la imaginaria" << endl;
//        cerr << "Luego se debera elegir la operacion que se desea realizar del menu" << endl;
//        exit(1);
//    }
//    
//    if(argc > 1) {
//        cerr << "El programa no admite datos por comando de linea" << endl;
//        cerr << "Pruebe " << argv[0] << " --help para mas informacion sobre el programa" << endl;
//        exit(1);
//    }
//}

int Check_switch(string order) {
    int x;
    if (order == "Suma") {
        x = 1;
    }
    if (order == "Resta") {
        x = 2;
    }
    if (order == "Multiplicar") {
        x = 3;
    }
    if (order == "Print") {
        x = 4;
    }
    if (order == "Cambio1") {
        x = 5;
    }
    if (order == "Cambio2") {
        x = 6;
    }
    if (order == "Help") {
        x = 7;
    }
    if (order == "Exit") {
        x = 8;
    }
    if (order == "Dividir") {
        x = 9;
    }
    return x;
}
#include <iostream>
#include <cstring>

#include "tools.h"

using namespace std;

void Usage(int argc, char *argv[]) {
    if (strcmp(argv[1], "--help" ) == 0) {
        cerr << "El modo de uso de este programa es el siguiente: " << endl;
        cerr << "Primero se debe introducir una fecha con el formato dd mm aa" << endl;
        cerr << "A continuacion se debe introducir un numero natural que determina la cantidad de dias que se le sumaran de 1 en 1 a la fecha original introducida" << endl;
        cerr << "Para finalizar se debe colocar el nombre del fichero de salida como por ejemplo: mi_fichero.txt" << endl;
        cerr << "Un ejemplo: ./fechas_f 12 4 2020 10 example.txt" << endl;
        exit(1);
    }
    if (argc != 6) {
        cerr << "Se han introducido los datos incorrectamente" << endl;
        cerr << "Pruebe " << argv[0] << " --help para mas informacion sobre el programa" << endl;
        exit(1);
    }
}
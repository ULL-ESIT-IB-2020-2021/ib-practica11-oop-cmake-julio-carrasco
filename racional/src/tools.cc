#include <iostream>
#include <cstring>

#include "tools.h"

using namespace std;



void Usage(int argc, char *argv[]) {
    if (strcmp(argv[1], "--help" ) == 0) {
        cerr << "El modo de uso de este programa es el siguiente: " << endl;
        cerr << argv[0] << " fichero_entrada.txt fichero_salida.txt" << endl;
        cerr << "El fichero de entrada debe tener este formato: a/b c/d" << endl;
        cerr << "Siendo a, b, c y d numeros que representan una fraccion y cada fraccion separada por un espacio, deben ser pares de fracciones" << endl;
        cerr << "El fichero de salida mostrara las operaciones realizadas: a/b + c/d = n/m" << endl;
        exit(1);
    }
    
    if(argc != 3) {
        cerr << "Se han introducido los datos incorrectamente" << endl;
        cerr << "Modo de uso: ./racional fichero_entrada.txt fichero_salida.txt" << endl;
        cerr << "Pruebe " << argv[0] << " --help para mas informacion sobre el programa" << endl;
        exit(1);
    }
}

int Checker(string str) {
    int aux = 0;
    int end = str.length();
    string helper = " ";
    string sav;
    for(int i = 0; i < str.length(); i++) {
        sav = str[i];
        if(sav.compare(helper) == 0) {
            aux = i-1;
        }
    }
    return aux;
}
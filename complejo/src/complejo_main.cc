#include <iostream>
#include <string>

#include "tools.h"
#include "complejo.h"

using namespace std;

int main() {
    Complejo num1, num2, result;
    string order = "Help";
    int x = 0, aux;
    cout << "Ahora debes introducir el primer numero complejo, empezando por la parte real" << endl;
    cin >> x;
    num1.SetReal(x);
    cout << "Ahora la parte imaginaria" << endl;
    cin >> x;
    num1.SetImg(x);
    cout << "El numero introducido es: ";
    num1.Print();
    cout << endl << endl;
    cout << "Parte real del segundo complejo" << endl;
    cin >> x;
    num2.SetReal(x);
    cout << "Parte imaginaria" << endl;
    cin >> x;
    num2.SetImg(x);
    cout << "El segundo numero introducido es: ";
    num2.Print();
    cout << endl << endl;
    while (order.compare("Exit") != 0) {
        if (order.compare("Help") == 0) {
            cout << "Los posibles comandos son los siguientes:" << endl;
            cout << "(Suma) para realizar la suma entre los 2 numeros" << endl;
            cout << "(Resta) para restar los 2 numeros" << endl;
            cout << "(Multiplicar) para multiplicar los 2 numeros" << endl;
            cout << "(Dividir) para dividir el primer numero sobre el segundo" << endl;
            cout << "(Print) para que se escriban en pantalla los 2 numeros" << endl;
            cout << "(Cambio1) para cambiar el primer numero" << endl;
            cout << "(Cambio2) para cambiar el segundo numero" << endl; 
            cout << "(Help) para volver a visualizar los comandos" << endl;
            cout << "(Exit) para cerrar el programa" << endl << endl;
        }
        cout << "Elige la operacion que realizaras" << endl;
        cin >> order;
        aux = Check_switch(order);
        switch(aux) {
            case 1:
                result.Sum(num1, num2);
                cout << "La suma de los 2 numeros es: ";
                result.Print();
                cout << endl << endl;
                break;
            case 2:
                result.Rest(num1, num2);
                cout << "La resta de los 2 nnumeros es: ";
                result.Print();
                cout << endl << endl;
                break;
            case 3:
                result.Mult(num1, num2);
                cout << "La multiplicacion de los 2 numeros es: ";
                result.Print();
                cout << endl << endl;
                break;
            case 4:
                cout << "El primer numero es: ";
                num1.Print();
                cout << endl;
                cout << "El segundo numero es: ";
                num2.Print();
                cout << endl << endl;
                break;
            case 5:
                cout << "Introduce parte real nueva" << endl;
                cin >> x;
                num1.SetReal(x);
                cout << "Ahora la parte imaginaria" << endl;
                cin >> x;
                num1.SetImg(x);
                break;
            case 6:
                cout << "Introduce parte real nueva" << endl;
                cin >> x;
                num2.SetReal(x);
                cout << "Ahora la parte imaginaria" << endl;
                cin >> x;
                num2.SetImg(x);
                break;
            case 7:
                order = "Help";
                break;
            case 8:
                order = "Exit";
                break;
            case 9:
                result.Div(num1, num2);
                break;
            default:
                break;
        }

    }
    return 0;
}
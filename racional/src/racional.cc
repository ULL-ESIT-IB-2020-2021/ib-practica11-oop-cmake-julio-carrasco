#include <iostream>
#include <string>

#include "racional.h"

using namespace std;

void Racional::Construct(int x, int y) {
    num = x;
    div = y;
}

void Racional::Construct() {
    num = 8;
    div = 5;
}

string Racional::Write() {
    string aux = num + "/" +  div;
    return aux;
}

void Racional::Read(string str1) {
    int aux = 0;
    int end = str1.length();
    string helper = "/";
    string sav = "";
    int i = 0;
    while(sav.compare(helper) != 0) {
        sav = str1[i];
        i++;
    }

    cout << "aux: " << aux << endl;
    cout << str1[aux] << endl;
    sav = str1.substr(0, aux);
    cout << "num: " << sav << endl;
    num = stoi(sav);
    sav = "";
    for(int i = aux + 1; i < str1.length(); i++) {
        sav = sav + str1[i];
        if(stoi(sav) == 0) {
            cerr << "El divisor no puede ser 0" << endl;
            exit(1);
        }
    }
    sav = str1.substr(aux + 1, end);
    cout << "div: " << sav << endl;
    div = stoi(sav);
}



void Racional::Sum(Racional sum1, Racional sum2) {
    int aux = 0;
    if(sum1.div == sum2.div) {
        num = sum1.num + sum2.num;
        div = sum1.div;
    }
    else  {
        num = sum1.num * sum2.div + sum2.num * sum1.div;
        div = sum1.div * sum2.div;
        aux = (num > div) ? num : div;
        while(aux % num != 0 && aux % div != 0) {
            aux++;
        }
        num = num / aux;
        div = div / aux;
    }
}

void Racional::Rest(Racional rest1, Racional rest2) {
    int aux = 0;
    if(rest1.div == rest2.div) {
        num = rest1.num - rest2.num;
        div = rest1.div;
    }
    else  {
        num = rest1.num * rest2.div - rest2.num * rest1.div;
        div = rest1.div * rest2.div;
        aux = (num > div) ? num : div;
        while(aux % num != 0 && aux % div != 0) {
            aux++;
        }
        num = num / aux;
        div = div / aux;
    }
}

void Racional::Mult(Racional mult1, Racional mult2) {
    int aux;
    num = mult1.num * mult2.num;
    div = mult1.div * mult2.div;
    aux = (num > div) ? num : div;
    while(aux % num != 0 && aux % div != 0) {
        aux++;
    }
    num = num / aux;
    div = div / aux;
}

void Racional::Div(Racional div1, Racional div2) {
    int aux;
    num = div1.num * div2.div;
    div = div1.div * div2.num;
    aux = (num > div) ? num : div;
    while(aux % num != 0 && aux % div != 0) {
        aux++;
    }
    num = num / aux;
    div = div / aux;
}
#include <iostream>

#include "complejo.h"

using namespace std;

void Complejo::Sum(Complejo sum1, Complejo sum2) {
    real = sum1.real + sum2.real;
    img = sum1.img + sum2.img;
}

void Complejo::Rest(Complejo rest1, Complejo rest2) {
    real = rest1.real - rest2.real;
    img = rest1.img - rest2.img;
}

void Complejo::Mult(Complejo mult1, Complejo mult2) {
    real = (mult1.real * mult2.real) - (mult1.img * mult2.img);
    img = (mult1.real * mult2.img) + (mult1.img * mult2.real);
}

void Complejo::Div(Complejo div1, Complejo div2) {
    real = (div1.real * div2.real) - (div1.img * div2.img);
    img = (div1.real * div2.img) + (div1.img * div2.real);
    realaux = (div2.real * div2.real + div2.img * div2.img);
    imgaux = (div2.real * div2.real + div2.img * div2.img);
    cout << "El resultado de la division es: " << real << "/" << realaux;
    if(img > 0) {
        cout << "+" << img << "i/" << imgaux << endl << endl; 
    }
    else {
        cout << img << "/" << imgaux << endl << endl;
    }

}

void Complejo::Print() {
    cout << "El numero complejo es: " << real;
    if(img > 0) {
        cout << "+" << img << "i";
    }
    else {
        cout << img << "i";
    }
}

void Complejo::SetReal(int x = 0) {
    real = x;
}

void Complejo::SetImg(int x = 0) {
    img = x;
}
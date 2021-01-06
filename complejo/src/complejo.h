#pragma once

class Complejo {
private:
    float real;
    float realaux;
    float img;
    float imgaux;
public:
    void Print();
    void Sum(Complejo, Complejo);
    void Rest(Complejo, Complejo);
    void Mult(Complejo, Complejo);
    void Div(Complejo, Complejo);
    void SetReal(int);
    void SetImg(int);
};

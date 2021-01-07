#pragma once
class Fecha {
private: 
    int day;
    int month;
    int year;
    bool bisiesto;
public:
    std::string Bisiesto();
    void Datef(int, int, int);
    void Suma();
    int GetDay();
    int GetMonth();
    int GetYear();
};


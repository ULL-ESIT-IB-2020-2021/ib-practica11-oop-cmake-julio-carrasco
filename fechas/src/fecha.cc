#include <iostream>
#include <vector>
#include "fecha.h"

using namespace std;

string Fecha::Bisiesto() {
    string x;
    cout << "El año " << year;
        if ((year % 4 ) == 0 ){
            x =" es bisiesto";
            bisiesto = true;
        }
        else {
            x =" no es bisiesto";
        }
    return x;
}

// if((fday == 31 && fmonth == 4, 6, 9, 11) || (fday > 31) || (fday > 28 && fmonth == 2 && fyear % 4 != 0) || (fday > 29 && fmonth == 2 && fyear % 4 == 0)) {
void Fecha::Datef(int fday, int fmonth, int fyear) {
    if((fday == 31 && (fmonth == 4 ||fmonth == 6 ||fmonth == 9 ||fmonth == 11)) || (fday > 31) || (fday > 28 && fmonth == 2 && year % 4 != 0) || (fday > 29 && fmonth == 2 && year % 4 == 0) || (fmonth > 12)) {
        cerr << "Input a valid date" << endl;
        exit(1);
    }
    day = fday;
    month = fmonth;
    year = fyear;
}

void Fecha::Suma() {
    day = day + 1;
    if((day == 31 && (month == 4 ||month == 6 ||month == 9 ||month == 11)) || (day == 32 && (month != 4 && month != 6 && month != 9 && month != 11)) || (day == 30 && month == 2 && bisiesto == true) || (day == 29 && month == 2 && bisiesto == false)) {
        day = 1;
        month = month + 1;
        if(month == 13) {
            year = year + 1;
            month = 1;
        }
    }
}

int Fecha::GetDay() {
    return day;
}
int Fecha::GetMonth() {
    return month;
}
int Fecha::GetYear() {
    return year;
}
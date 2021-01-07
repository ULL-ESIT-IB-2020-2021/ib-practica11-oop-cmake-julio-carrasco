#include <iostream>
#include <fstream>
#include <string>

#include "fecha.h"
#include "tools.h"
using namespace std;

int main(int argc, char* argv[]) {
    Usage(argc, argv);
    int aday = atoi(argv[1]);
    int amonth = atoi(argv[2]);
    int ayear = atoi(argv[3]);
    Fecha fholder;
    cout << aday << " " << amonth << " " << ayear << endl;
    fholder.Datef(aday, amonth, ayear);
    cout << fholder.Bisiesto() << endl;
    cout << fholder.GetDay() << "/" << fholder.GetMonth() << "/" << fholder.GetYear() << endl;
    ofstream myfile;
    myfile.open (argv[5]);
    myfile << "Fecha original: " << fholder.GetDay() << "/" << fholder.GetMonth() << "/" << fholder.GetYear() << endl;
    for (int i = 0; i < atoi(argv[4]); i++) {
        fholder.Suma();
        myfile << fholder.GetDay() << "/" << fholder.GetMonth() << "/" << fholder.GetYear() << endl;
    }
    myfile.close();
    return 0;

}
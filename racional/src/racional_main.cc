#include <iostream>
#include <fstream>
#include <string>

#include "tools.h"
#include "racional.h"

using namespace std;

int main(int argc, char* argv[]) {
    Usage(argc, argv);
    Racional num1, num2, result;
    ifstream file;
    file.open(argv[1], ifstream::in);
    cout << argv[1] << endl;
    while(!file.eof()) {
        cout << "here" << endl;
        string helper = "9/8 4/3";
        int checker;
        std::getline(file, helper);
        checker = Checker(helper);
        cout << "helper: " <<  helper << endl;
        string str1 = helper.substr(1, checker);
        cout << "Over here" << endl;
        string str2 = helper.substr(checker, helper.length());
        cout << "Not here" << endl;
        num1.Read(str1);
        num2.Read(str2);
        ofstream myfile;
        myfile.open(argv[2]);
        result.Sum(num1, num2);
        myfile << num1.Write() << " + " << num2.Write() << " = " << result.Write() << endl;
        cout << num1.Write() << " + " << num2.Write() << " = " << result.Write() << endl;
        result.Rest(num1, num2);
        myfile << num1.Write() << " - " << num2.Write() << " = " << result.Write() << endl;
        result.Mult(num1, num2);
        myfile << num1.Write() << " * " << num2.Write() << " = " << result.Write() << endl;
        result.Div(num1, num2);
        myfile << num1.Write() << " / " << num2.Write() << " = " << result.Write() << endl;
        myfile.close();
    }
    cout << "hey" << endl;
    file.close();
    
    return 0;
}
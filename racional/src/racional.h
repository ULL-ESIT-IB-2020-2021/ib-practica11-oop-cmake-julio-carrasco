#pragma once

class Racional {
    private:
    int num;
    int div;

    public:
    void Construct(int, int);
    void Construct();
    // outputs the number to screen or to a file
    std::string Write();
    // gets number from file or screen
    void Read(std::string);
    void Sum(Racional, Racional);
    void Rest(Racional, Racional);
    void Mult(Racional, Racional);
    void Div(Racional, Racional);
    int Checker(std::string);
};
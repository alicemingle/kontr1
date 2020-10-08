#pragma once
#include <iostream>
#define LENGTH 5

using namespace std;
class CIntNR {
private:
    int vect[LENGTH];
    int mod;
public:
    CIntNR(); // Конструктор по умолчанию
    CIntNR(int N, int* coord_arr); // Конструктор, N - параметр кольца вычетов, coord_arr- массив, первое число - колво коорд.
    CIntNR operator+(const CIntNR& arg);
    CIntNR operator-(const CIntNR& arg);
    void print();
};

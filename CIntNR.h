#pragma once
#include <iostream>
#define LENGTH 5

using namespace std;
class CIntNR {
private:
    int vect[LENGTH];
    int mod;
public:
    CIntNR(); // ����������� �� ���������
    CIntNR(int N, int* coord_arr); // �����������, N - �������� ������ �������, coord_arr- ������, ������ ����� - ����� �����.
    CIntNR operator+(const CIntNR& arg);
    CIntNR operator-(const CIntNR& arg);
    void print();
};

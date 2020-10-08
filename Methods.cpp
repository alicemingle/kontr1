#include "CIntNR.h"

CIntNR::CIntNR() {
    mod = 10;
    for (int i = 0; i < LENGTH; i++) {
        vect[i] = 0;
    }
}

CIntNR::CIntNR(int N, int* coord_arr) {
    if (N <= 0) {
        cout << "Error: wrong N" << endl;
        exit(-1);
    }
    mod = N;
    if (coord_arr[0] != LENGTH) {
        cout << "Error: wrong number of coordinates" << endl;
    }
    for (int i = 0; i < LENGTH; i++) {
        vect[i] = coord_arr[i + 1];
    }
}

CIntNR CIntNR::operator+(const CIntNR& arg) {
    int* res_coords = new int[LENGTH + 1];
    res_coords[0] = LENGTH;
    for (int i = 1; i < LENGTH + 1; i++) {
        res_coords[i] = (vect[i - 1] + arg.vect[i - 1]) % mod;
    }
    CIntNR result(mod, res_coords);
    delete[] res_coords; //очищаем память
    return result;
}

CIntNR CIntNR::operator-(const CIntNR& arg) {
    int* res_coords = new int[LENGTH + 1];
    res_coords[0] = LENGTH;
    for (int i = 1; i < LENGTH + 1; i++) {
        res_coords[i] = (vect[i - 1] - arg.vect[i - 1]) % mod;
    }
    CIntNR result(mod, res_coords);
    delete[] res_coords;
    return result;
}
void CIntNR::print() {
    cout << "(";
    for (int i = 0; i < LENGTH; i++) {
        cout << vect[i] << " ";
    }
    cout << ")";
}

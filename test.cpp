#include <iostream>
#include "CIntNR.h"
#define LENGTH 5
using namespace std;


void Autotest(void) {
    cout << "AUTOTEST STARTED..." << endl;
    CIntNR A(6, coords_1), B(6, coords_2);
    for (int i = 1; i < LENGTH + 1; i++) {
        coords_1[i] = 1;
        coords_2[i] = 5;
    }
    CIntNR C, D;
    C = A + B;
    D = B - A;
    for (int i = 1; i < LENGTH + 1; i++) {
        if ((C[i] == 0) && (D[i] == 4) ) { cout << "Autotest passed..." << endl; }
        else { cout << "Autotest failed! wasted..." << endl; }
    }
}

#include "CIntNR.h"
#include "autotest.hpp"

int main(void) {
    int *coords_1 = new int[LENGTH], *coords_2 = new int[LENGTH];
    coords_1[0] = LENGTH; coords_2[0] = LENGTH;
    for (int i = 1; i < LENGTH + 1; i++) {
        coords_1[i] = i;
        coords_2[i] = LENGTH + 5 - i;
    }
    CIntNR A(6, coords_1), B(6, coords_2);
    CIntNR C, D;
    C = A + B;
    D = B - A;
    C.print();
    cout << endl << endl;
    D.print();
    autotest1();
    autotest2();
    return 0;
}

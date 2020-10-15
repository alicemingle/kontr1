#include "CIntNR.hpp"

void autotest1()
{
	int* coords_1 = new int[LENGTH + 1], * coords_2 = new int[LENGTH + 1];
	int flag = 0;
	coords_1[0] = LENGTH;
	coords_2[0] = LENGTH;
	for (int i = 1; i < LENGTH + 1; i++)
	{
		coords_1[i] = i;
		coords_2[i] = LENGTH + 5 - i;
	}
	CIntNR A(6, coords_1), B(6, coords_2), C;
	C = A + B;
	for (int i = 0; i < LENGTH; i++)
	{
		if (C.vect[i] == 4) flag++;
	}
	if (flag == LENGTH) cout << "Autotest 1 complete!" << endl;
	else cout << "Autotest 1 fail" << endl;
}

void autotest2()
{
	int* coords_1 = new int[LENGTH + 1], * coords_2 = new int[LENGTH + 1];
	int flag = 0;
	coords_1[0] = LENGTH;
	coords_2[0] = LENGTH;
	for (int i = 1; i < LENGTH + 1; i++)
	{
		coords_1[i] = 7;
		coords_2[i] = 3;
	}
	CIntNR F(6, coords_1), E(6, coords_2), D;
	D = E - F;
	for (int i = 0; i < LENGTH; i++)
	{
		if (D.vect[i] == 4) flag++;
	}
	if (flag == LENGTH) cout << "Autotest 1 complete!" << endl;
	else cout << "Autotest 1 fail" << endl;
}

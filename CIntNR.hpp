#include <iostream>
#define LENGTH 5

using namespace std;
class CIntNR
{
private:
	int mod;
	int vect[LENGTH];
	friend void autotest1();
	friend void autotest2();
public:
	CIntNR(); // ����������� �� ���������
	CIntNR(int N);
	CIntNR(int N, int* coord_arr); // �����������, N - �������� ������ �������, coord_arr- ������, ������ ����� - ����� �����.
	CIntNR operator+(const CIntNR& arg);
	CIntNR operator-(const CIntNR& arg);
	void print();
};

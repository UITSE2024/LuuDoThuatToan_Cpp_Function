#include <iostream>
using namespace std;

float Tinhx13(float);

int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "Ket qua: " << Tinhx13(x);
	return 0;
}

float Tinhx13(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x5 = x4 * xx;
	float x8 = x4 * x4;
	float x13 = x8 * x5;
	return x13;
}
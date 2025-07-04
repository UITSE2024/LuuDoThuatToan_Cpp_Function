#include <iostream>
using namespace std;

float Tinh(float);

int main()
{
	float x;
	cout << "Nhap x = ";
	cin >> x;

	cout << "Ket qua: " << Tinh(x);

	return 0;
}

float Tinh(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x9 = x8 * x;
	return x9;
}
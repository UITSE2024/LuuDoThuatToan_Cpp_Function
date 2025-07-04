#include <iostream>
using namespace std;

float Tinh(float);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	cout << "x6 = " << Tinh(x);
	return 0;
}

float Tinh(float x)
{
	float x2 = x * x;
	float x4 = x2 * x2;
	return x4 * x2;
}
#include<iostream>

using namespace std;

float tinhX14(float);

int main()
{

	float x;
	cout << "Nhap vao gia tri cua x: "; cin >> x;

	float x14 = tinhX14(x);

	cout << "Gia tri cua x14: " << x14;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

float tinhX14(float xx)
{
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x8 = x4 * x4;
	float x14 = x8 * x6;

	return x14;
}
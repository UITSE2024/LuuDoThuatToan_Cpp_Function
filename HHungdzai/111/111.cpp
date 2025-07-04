#include<iostream>

using namespace std;

float tinhBieuThuc();

int main()
{

	cout << "Tinh gia tri cua pi: " << tinhBieuThuc();

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

float tinhBieuThuc()
{
	float s = 3;
	int dau = 1, i = 2;

	float e = 3;
	float epsilon = 1e-6;

	while (e >= epsilon)
	{
		e = 4.0 / (i * (i + 1) * (i + 2));
		s += (float)dau * e;
		dau = -dau;
		i += 2;
	}

	return s;
}
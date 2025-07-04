#include<iostream>

using namespace std;

float tinhBieuThuc(int);

int main()
{

	int n;
	cout << "Nhap vao gia tri cua n: "; cin >> n;

	cout << "Gia tri cua bieu thuc: " << tinhBieuThuc(n);

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

float tinhBieuThuc(int n)
{
	float s = 0;
	for (int i = 2; i <= n; ++i)
	{
		s += pow(i + s, 1.0/i);
	}

	return s;
}
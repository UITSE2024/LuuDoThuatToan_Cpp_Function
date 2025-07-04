#include<iostream>

using namespace std;

float tinhBieuThuc(float, int);
void Nhap(float&, int&);

int main() {

	float x;
	int n;
	Nhap(x, n);

	float res = tinhBieuThuc(x, n);

	cout << "Gia tri bieu thuc: " << res;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(float& x, int& n)
{
	cout << "Nhap vao x: "; cin >> x;
	cout << "Nhap vao n: "; cin >> n;
}

float tinhBieuThuc(float x, int n)
{
	float s = 0, t = 1;
	int dau = 1;

	for (int i = 1; i <= n; ++i)
	{
		t *= x;
		s += dau * t;
		dau = -dau;
	}

	return s;
}
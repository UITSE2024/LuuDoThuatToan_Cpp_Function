#include<iostream>
#include<cmath>

using namespace std;

float tinhBieuThuc(int);

int main() {

	int n;
	cout << "Nhap vao n: "; cin >> n;

	float res = tinhBieuThuc(n);

	cout << "Gia tri bieu thuc: " << res;

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

float tinhBieuThuc(int nn)
{
	float s = 0;

	for (int i = 1; i <= nn; ++i)
	{
		s += (float)1 / ((i + 1) * sqrt(i) + i * sqrt(i + 1));
	}

	return s;
}
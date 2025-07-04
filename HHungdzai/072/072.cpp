#include<iostream>

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

float tinhBieuThuc(int n)
{
	float s = 0;
	int m = 0;

	for (int i = 1; i <= n; ++i)
	{
		m += i;
		s += 1.0 / m;
	}

	return s;
}
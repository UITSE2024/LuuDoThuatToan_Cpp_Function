#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	int x;
	cout << "\nNhap x = ";
	cin >> x;

	cout << "\nKet qua: " << Tinh(x * 3.14 / 180);

	return 0;
}

float Tinh(int xx)
{
	float s = 1;
	int t = 1;
	int m = 1;
	int dau = -1;
	float e = 1;
	int i = 2;
	while (e >= 1e-6)
	{
		t = t * xx * xx;
		m = m * (i - 1) * i;
		e = (float)t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	return s;
}
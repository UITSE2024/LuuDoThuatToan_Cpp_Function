#include <iostream>
using namespace std;

float tinhS(float xx, int nn)
{
	float s = -1;
	int t = 1;
	int m = 1;
	int i = 2;
	int dau = 1;
	while (i <= 2 * nn)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	return s;
}

int main()
{
	float x; cout << "Nhap x: "; cin >> x;
	int n; cout << "Nhap n: "; cin >> n;
	cout << "Tong s = " << tinhS(x, n);
	return 0;
}
#include <iostream>
using namespace std;

float Tinh(float, int);
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(x,n) = " << Tinh(x, n);
}

float Tinh(float xx, int nn)
{
	float s = 0, t = 1, m = 1;
	int dau = -1;
	for (int i = 1;i <= nn;i++)
	{
		t = t * xx;
		m = m * i;
		s = s + dau * t / m;
		dau = -dau;
	}
	return s;
}
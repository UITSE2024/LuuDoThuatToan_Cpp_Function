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

float Tinh(float x, int n)
{
	float s = 0, t = 1, m = 1;
	int dau = -1;
	for (int i = 1;i <= n;i++)
	{
		t = t * x;
		m = m * i;
		s = s + dau * t / m;
		dau = -dau;
	}
	return s;
}
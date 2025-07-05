
#include <iostream>
using namespace std;

void Nhap(int&, float&);
float Tong(int, float);

int main()
{
	int n;
	float x;
	Nhap(n, x);
	cout << "Tong: " << Tong(n, x);
	return 0;
}

void Nhap(int& nn, float& xx)
{
	cout << "Nhap n: ";
	cin >> nn;
	cout << "Nhap x: ";
	cin >> xx;
}

float Tong(int nn, float xx)
{
	float s = 0;
	int t = 1;
	int m = 0;
	int i = 1;
	int dau = -1;
	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		s = s + dau * (float)t / m;
		i++;
		dau = -dau;
	}
	return s;
}
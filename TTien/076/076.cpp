
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

void Nhap(int& nn, float &xx)
{
	cout << "Nhap n: ";
	cin >> nn;
	cout << "Nhap x: ";
	cin >> xx;
}

float Tong(int nn, float xx)
{
	float s = 1 + xx;
	float t = xx;
	int m = 1;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		m = m * i * (i - 1);
		s = s + (float)t / m;
		i = i + 2;
	}
	return s;
}
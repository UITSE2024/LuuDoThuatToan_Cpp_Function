#include <iostream>
#include <cmath>
using namespace std;

float Tong(float, int);

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(x, n);
	return 0;
}

float Tong(float xx, int nn)
{
	float s = 0;
	float t = 1;
	int i = 1;
	while (i <= nn)
	{
		t = t * xx;
		s = sqrt(t + s);
		i = i + 1;
	}
	return s;
}
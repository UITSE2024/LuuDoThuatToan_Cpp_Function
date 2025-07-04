#include <iostream>
using namespace std;

float Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(n);
	return 0;
}

float Tong(int nn)
{
	float s = 0;
	int dau = 1;
	float e = 4;
	int i = 1;
	int epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -1 * dau;
	}
	return s;
}
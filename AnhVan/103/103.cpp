#include <iostream>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << Tinh(n);
	return 0;
}

float Tinh(int n)
{
	float s = 0, e = 1;
	int i = 1;
	float ep = 10e-6;
	while (e >= ep)
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}
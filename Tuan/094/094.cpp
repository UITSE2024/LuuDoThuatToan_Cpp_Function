#include <iostream>
#include <cmath>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;

	cout << "\nKet qua = " << Tinh(n);
	return 0;
}

float Tinh(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = sqrt(i + s);
		i = i + 1;
	}
	return s;
}
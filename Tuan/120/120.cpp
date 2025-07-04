#include <iostream>
#include <math.h>
using namespace std;

float Tinh(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;

	cout << "\nKet qua: " << Tinh(n);

	return 0;
}

float Tinh(int nn)
{
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= nn)
	{
		ahh = 5 * at + sqrt(24 * at * at - 8);
		i = i + 1;
		at = ahh;
	}
	return ahh;
}
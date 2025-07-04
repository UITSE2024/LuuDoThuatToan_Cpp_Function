#include <iostream>
#include <cmath>
using namespace std;

float Tong(float);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(n);
	return 0;
}

float Tong(float nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + (float)1 / (pow(i, 0.5) + pow(i + 1, 0.5));
		i = i + 1;
	}
	return s;
}
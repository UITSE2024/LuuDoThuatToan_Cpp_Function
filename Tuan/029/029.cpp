#include <iostream>
using namespace std;

float TinhTong(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;

	cout << "\nKet qua: " << TinhTong(n);
	return 0;
}

float TinhTong(int nn)
{
	float s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + 1.0 / i;
		i = i + 1;
	}
	return s;
}
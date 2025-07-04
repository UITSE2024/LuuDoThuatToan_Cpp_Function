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

float TinhTong(int n)
{
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = s + 1 / (i * (i + 1));
		i = i + 1;
	}
	return s;
}
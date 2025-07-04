#include <iostream>
using namespace std;

float TinhTong(int, int);

int main()
{
	int n, x;
	cout << "\nNhap n = ";
	cin >> n;
	cout << "\nNhap x = ";
	cin >> x;

	cout << TinhTong(x, n);

	return 0;
}

float TinhTong(int x, int n)
{
	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + 1.0 / m;
		i = i + 1;
	}
	return s;
}
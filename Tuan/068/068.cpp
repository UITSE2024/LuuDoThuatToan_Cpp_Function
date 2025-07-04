#include <iostream>
using namespace std;

int TinhTong(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;

	cout << "\nKet qua: " << TinhTong(n);

	return 0;
}

int TinhTong(int n)
{
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	return s;
}
#include <iostream>
using namespace std;

int TinhTich(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;

	cout << "\nKet qua: " << TinhTich(n);

	return 0;
}

int TinhTich(int nn)
{
	int t = 1;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			t = t * i;
		i = i + 2;
	}
	return t;
}
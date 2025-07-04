#include <iostream>
using namespace std;
int Tinhtong(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong: " << Tinhtong(n);
}
int Tinhtong(int n)
{
	int s = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			s += dv;
		t = t / 10;
	}
	return s;
}
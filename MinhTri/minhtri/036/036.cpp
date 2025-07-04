#include <iostream>
using namespace std;
void Nhap(int&, int&);
int Tinhtich(int, int);
int main()
{
	int x, n;
	Nhap(x, n);
	cout << "Tich: " << Tinhtich(x, n);
}
void Nhap(int& x, int& n)
{
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
}
int Tinhtich(int x, int n)
{
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t *= x;
		i++;
	}
	return t;
}
#include<iostream>
#define PI 3.14
using namespace std;
void Nhap(int&, int&);
int TichLienTiepX(int, int);
int main()
{
	int x, n;
	Nhap(x, n);
	cout << TichLienTiepX(n, x);
}
void Nhap(int& x, int& n)
{
	cin >> x >> n;
}
int TichLienTiepX(int n, int x)
{
	int s = x;
	for (int i = 1; i <= n; i++)
	{
		s *= (x+i);
	}
	return s;
}
#include<iostream>
#define PI 3.14
using namespace std;
void Nhap(int&, int&);
int TongPhanSo(int, int);
int main()
{
	int x, n;
	Nhap(x, n);
	cout << TongPhanSo(x, n);
}
void Nhap(int& x, int& n)
{
	cin >> x >> n;
}
int TongPhanSo(int x, int n)
{
	int s = x;
	int t = x;
	int dau = -1;
	for (int i = 3; i <= 2*n + 1; i+=2)
	{
		t *= x*x;
		s += dau * t;
		dau = -dau;
	}
	return s;
}
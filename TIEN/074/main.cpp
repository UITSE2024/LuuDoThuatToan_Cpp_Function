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
	int s = 0;
	int m = 1;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= x;
		m *= i;
		s += t / m;
	}
	return s;
}
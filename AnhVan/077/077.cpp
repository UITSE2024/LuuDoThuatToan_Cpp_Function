#include <iostream>
#include <cmath>
using namespace std;

long TongLuyThua(int, int);
int main()
{
	int k;
	cout << "Nhap k: ";
	cin >> k;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong luy thua S(n,k) = " << TongLuyThua(n, k);
	return 0;
}

long TongLuyThua(int nn, int kk)
{
	long s = 0;
	for (int i = 1;i <= nn; i++)
		s = s + pow(i, kk);
	return s;
}
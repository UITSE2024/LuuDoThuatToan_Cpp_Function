#include <iostream>
#include <cmath>
using namespace std;

long TongLuyThua(int, int);
int main()
{
	int k, n;
	cout << "Nhap k: ";
	cin >> k;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tong luy thua S(n,k) = " << TongLuyThua(n, k);
	return 0;
}

long TongLuyThua(int n, int k)
{
	long s = 0;
	for (int i = 1;i <= n; i++)
		s = s + pow(i, k);
	return s;
}
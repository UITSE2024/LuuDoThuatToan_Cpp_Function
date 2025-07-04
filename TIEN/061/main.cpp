#include<iostream>
#define PI 3.14
using namespace std;
void Nhap(int&);
int ChuSoLe(int);
int main()
{
	int n;
	Nhap(n);
	cout << ChuSoLe(n);
}
void Nhap(int &n)
{
	cin >> n;
}
int ChuSoLe(int n)
{
	int dem = 0;
	while (n)
	{
		int dv = n % 10;
		if (dv % 2 == 0)
			dem++;
		n /= 10;
	}
	return dem;
}
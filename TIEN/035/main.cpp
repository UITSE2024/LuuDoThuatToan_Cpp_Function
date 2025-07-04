#include<iostream>
#define PI 3.14
using namespace std;
int TichLienTiep(int);
int main()
{
	int n;
	cin >> n;
	cout << TichLienTiep(n);
}
int TichLienTiep(int n)
{
	int s = 1;
	for (int i = 1; i <= n; i++)
	{
		s *= i;
	}
	return s;
}
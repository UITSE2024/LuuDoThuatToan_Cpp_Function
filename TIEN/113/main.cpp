#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
int TongSoHang(int);
int main()
{
	int n;
	cin >> n;
	cout << TongCan(n);
}
int TongSoHang(int n)
{
	int ahh = 2;
	if (n == 1) return ahh;
	int at = 2;
	for (int i = 2; i <= n; i++)
	{
		ahh = at + 2 * i + 1;
		at = ahh;
	}
	return ahh;
}
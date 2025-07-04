#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
int TongCan(int);
int main()
{
	int n;
	cin >> n;
	cout << TongCan( n);
}
int TongCan(int n)
{
	int s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++)
	{
		t *= i;
		s = pow(t + s, 1 / (i + 1));
	}
	return s;
}
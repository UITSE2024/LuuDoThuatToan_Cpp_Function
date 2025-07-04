#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
void Nhap(int&, int&);
void PhuongTrinh1(int, int);
int main()
{
	int a, b;
	Nhap(a, b);
	PhuongTrinh1(a, b);
}
void Nhap(int& aa, int& bb)
{
	cin >> a >> b;
}
void PhuongTrinh1(int a, int b)
{
	if (a == b && b == 0)
		cout << "Vo so nghiem";
	if (a == 0)
		cout << "Vo nghiem";
	else
	{
		cout << 1.0*(-b) / a;
	}
}
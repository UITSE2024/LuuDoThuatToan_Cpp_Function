#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
void Nhap(int&, int&);
bool kiemtraluythua3(int);
int main()
{
	int n;
	cin >> n;
	if (kiemtraluythua3(n))
		cout << "La dang";
	else
		cout << "Khong la dang";
}
void Nhap(int& a, int& b)
{
	cin >> a >> b;
}
bool kiemtraluythua3(int n)
{
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 3;
		if (du) flag = 0;
		t /= 3;
	}
	return flag;
}
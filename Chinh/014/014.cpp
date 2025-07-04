#include <iostream>
using namespace std;

int TinhLuyThua32(int);

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	cout << "x^32 = " << TinhLuyThua32(x);
}

int TinhLuyThua32(int x)
{
	int x2 = x * x;
	int x4 = x2 * x2;
	int x8 = x4 * x4;
	int x16 = x8 * x8;
	int x32 = x16 * x16;
	return x32;
}

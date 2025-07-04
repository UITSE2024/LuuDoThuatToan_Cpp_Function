#include <iostream>
using namespace std;

long Tinhx64(int);

int main()
{
	int x;
	cin >> x;

	cout << "x^64 = " << Tinhx64(x);
	return 0;
}

long Tinhx64(int xx)
{
	long x2 = xx * xx;
	long x4 = x2 * x2;
	long x8 = x4 * x4;
	long x16 = x8 * x8;
	long x32 = x16 * x16;
	long x64 = x32 * x32;
	return x64;
}
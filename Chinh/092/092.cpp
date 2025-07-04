#include <iostream>
using namespace std;

float Tong(int, int);

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Gia tri bieu thuc: " << Tong(x, n) << endl;
}

float Tong(int x, int n)
{
	float s = 1 - x;
	int t = x;
	int m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * n + 1)
	{
		t *= x * x;
		m *= i * (i - 1);
		s += dau * (float)t / m;
		i += 2;
		dau = -dau;
	}
	return s;
}
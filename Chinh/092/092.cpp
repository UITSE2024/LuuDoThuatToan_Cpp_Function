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

float Tong(int xx, int nn)
{
	float s = 1 - xx;
	int t = xx;
	int m = 1;
	int i = 3;
	int dau = 1;
	while (i <= 2 * nn + 1)
	{
		t *= xx * xx;
		m *= i * (i - 1);
		s += dau * (float)t / m;
		i += 2;
		dau = -dau;
	}
	return s;
}
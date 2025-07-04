#include <iostream>
using namespace std;

float Tong(float, int);

int main()
{
	int x, n;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;

	cout << "Tong la: " << Tong(x, n);
	return 0;
}

float Tong(float xx, int nn)
{
	float s = xx;
	float t = xx;
	int i = 3;
	while (i <= 2 * nn + 1)
	{
		t = t * xx * xx;
		s = s + t;
		i = i + 2;
	}
	return s;
}
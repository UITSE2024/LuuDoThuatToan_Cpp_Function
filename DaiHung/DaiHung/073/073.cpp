#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int&);
double tinhTong(int, int);
void Xuat(double);

int main()
{
	int x, n;
	cout << "\nNhap x: ";
	Nhap(x);

	cout << "\nNhap n: ";
	Nhap(n);

	double S = tinhTong(x, n);

	cout << "\nTong S la: ";
	Xuat(S);

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& nn)
{
	cin >> nn;
}

double tinhTong(int xx, int nn)
{
	double S = 0.0;
	int t = 1;
	int m = 0;
	int i = 1;

	while (i <= nn)
	{
		t = t * xx;
		m = m + i;
		S = S + (double)t / m;
		i = i + 1;
	}

	return S;
}

void Xuat(double ss)
{
	cout << ss << endl;
}
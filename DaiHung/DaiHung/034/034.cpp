#include <iostream>

using namespace std;

void Nhap(int&);
double tinhTong(int);
void Xuat(double);

int main()
{
	int n;
	cout << "\nNhap n: ";
	Nhap(n);

	double S = tinhTong(n);

	cout << "\nTong S la: ";
	Xuat(S);

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& nn)
{
	cin >> nn;
}

double tinhTong(int nn)
{
	double S = 0.0;
	int i = 1;

	while (i <= 2 * nn + 1)
	{
		S = S + ((double)i / (i + 1));
		i = i + 2;
	}

	return S;
}

void Xuat(double ss)
{
	cout << ss << endl;
}
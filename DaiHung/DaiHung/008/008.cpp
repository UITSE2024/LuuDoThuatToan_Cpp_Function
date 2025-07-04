#define _USE_MATH_DEFINES

#include <iostream>
#include <cmath>

using namespace std;

void Nhap(float&, int&);
float tinhChuVi(float, int);

int main()
{
	int n;
	float r;

	Nhap(r, n);

	float chuVi = tinhChuVi(r, n);
	cout << "\nChu vi da giac deu co ban kinh " << r << " va so canh " << n << " la: " << chuVi;

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(float& rr, int& nn)
{
	cout << "\nNhap ban kinh: ";
	cin >> rr;

	cout << "\nNhap so canh cua da giac deu: ";
	cin >> nn;
}

float tinhChuVi(float rr, int nn)
{
	return 2 * nn * rr * sin(M_PI / nn);
}
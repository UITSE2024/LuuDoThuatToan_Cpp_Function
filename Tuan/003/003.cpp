#include <iostream>
using namespace std;

float TinhChuVi(float);

int main()
{
	float r;
	cout << "Nhap r = ";
	cin >> r;

	cout << "Chu vi duong tron: " << TinhChuVi(r);

	return 0;
}

float TinhChuVi(float rr)
{
	return 2 * 3.14 * rr;
}
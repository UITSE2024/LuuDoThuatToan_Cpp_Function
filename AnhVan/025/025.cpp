#include <iostream>
using namespace std;

void Nhap(int&, int&);
void HoanVi(int&, int&);
void Xuat(int, int);

int main()
{
	int a, b;
	Nhap(a, b);

	cout << "\nTruoc khi hoan vi:";
	Xuat(a, b);

	cout << "\nSau khi hoan vi:";
	HoanVi(a, b);
	Xuat(a, b);
}

void Nhap(int& aa, int& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

void HoanVi(int& aa, int& bb)
{
	int temp = aa;
	aa = bb;
	bb = temp;
}

void Xuat(int aa, int bb)
{
	cout << "\na = " << aa;
	cout << "\nb = " << bb << endl;
}
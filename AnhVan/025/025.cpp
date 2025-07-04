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

void Nhap(int& a, int& b)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}

void HoanVi(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Xuat(int a, int b)
{
	cout << "\na = " << a;
	cout << "\nb = " << b << endl;
}
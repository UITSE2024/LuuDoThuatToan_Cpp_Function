#include <iostream>

using namespace std;

void Nhap(int&);
void XuLy(int&, int&);
void Xuat(int);

int main()
{
	int a;
	cout << "\nNhap a: ";
	Nhap(a);

	int b;
	cout << "\nNhap b: ";
	Nhap(b);

	cout << "\nDu lieu truoc khi xu li: \n";
	cout << "\na = ";
	Xuat(a);
	cout << "\nb = ";
	Xuat(b);

	XuLy(a, b);

	cout << "\nDu lieu sau khi xu li: \n";
	cout << "\na = ";
	Xuat(a);
	cout << "\nb = ";
	Xuat(b);

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& nn)
{
	cin >> nn;
}

void XuLy(int& aa, int& bb)
{
	if (aa < 0)
		aa = -aa;

	if (bb < 0)
		bb = -bb;
}

void Xuat(int ss)
{
	cout << ss << endl;
}
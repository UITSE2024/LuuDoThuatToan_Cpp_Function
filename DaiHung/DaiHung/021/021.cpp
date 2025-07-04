#include <iostream>

using namespace std;

void Nhap(int&);
int tinhX15(int);
void Xuat(int);

int main()
{
	int x;
	Nhap(x);

	int x15 = tinhX15(x);

	cout << "\nX15 = ";
	Xuat(x15);

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& xx)
{
	cout << "\nNhap x: ";
	cin >> xx;
}

int tinhX15(int xx)
{
	int xx2 = xx * xx;
	int xx4 = xx2 * xx2;
	int xx8 = xx4 * xx4;
	int xx16 = xx8 * xx8;
	int xx15 = xx16 / xx;
	return xx15;
}

void Xuat(int xx)
{
	cout << xx << endl;
}
#include <iostream>
#include <cmath>

using namespace std;

void Nhap(int&);
int tinhTichCacChuSo(int);
void Xuat(int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	Nhap(n);

	int tich = tinhTichCacChuSo(n);

	cout << "\nTich cac chu so la: ";
	Xuat(tich);

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& nn)
{
	cin >> nn;
}

int tinhTichCacChuSo(int nn)
{
	int tich = 1;
	int t = nn;

	while (t != 0)
	{
		int dv = t % 10;
		tich = tich * dv;
		t = t / 10;
	}

	return tich;
}

void Xuat(int ss)
{
	cout << ss << endl;
}
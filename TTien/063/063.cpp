
#include <iostream>
using namespace std;

void Nhap(int&);
int TichChuSoLe(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Tich cac chu so le: " << TichChuSoLe(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int TichChuSoLe(int nn)
{
	int tich = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0)
			tich = tich * dv;
		t = t / 10;
	}
	return tich;
}
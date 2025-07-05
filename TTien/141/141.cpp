
#include <iostream>
using namespace std;

void Nhap(int&);
int SoDauTien(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Chu so dau tien: " << SoDauTien(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int SoDauTien(int nn)
{
	int dt = abs(nn);
	while (dt >= 10)
		dt = dt / 10;
	return dt;
}
#include<iostream>

using namespace std;

void Nhap(int&, int&);
int UCLN(int, int);
int BCNN(int, int);

int main()
{
	int a, b;
	Nhap(a, b);

	cout << "Boi chung nho nhat cua a va b: " << BCNN(a, b);

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

void Nhap(int& a, int& b)
{
	cout << "Nhap vao gia tri cua a: "; cin >> a;
	cout << "Nhap vao gia tri cua b: "; cin >> b;
}

int UCLN(int a, int b)
{
	int m = abs(a), n = abs(b);

	while (m * n != 0)
	{
		if (m > n)
			m -= n;
		else n -= m;
	}

	return m + n;

}

int BCNN(int a, int b)
{

	int gcd = UCLN(a, b);

	return abs(a * b) / gcd;
}



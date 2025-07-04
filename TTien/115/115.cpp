
#include <iostream>
using namespace std;

void Nhap(int&);
int TinhAn(int n);
int main()
{
	int n;
	Nhap(n);
	cout << "So hang thu n: " << TinhAn(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int TinhAn(int nn)
{
	int att = -1;
	int at = 3;
	int i = 2;
	int ahh;
	if (nn == 1)
		ahh = 3;
	else if (nn == 0)
		ahh = -1;
	else
		while (i <= nn)
		{
			ahh = 5 * at + 6 * att;
			i++;
			att = at;
			at = ahh;
		}
	return ahh;
}
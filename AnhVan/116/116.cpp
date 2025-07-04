#include <iostream>
using namespace std;

int TinhSoHang(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu n cua day: " << TinhSoHang(n);
	return 0;

}

int TinhSoHang(int nn)
{
	int att = 1;
	int at = 2;
	int i = 2;
	int ahh = 0;
	while (i <= nn)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}
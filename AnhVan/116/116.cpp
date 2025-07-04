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

int TinhSoHang(int n)
{
	int att = 1, at = 2, i = 2, ahh = 0;
	while (i <= n)
	{
		ahh = 4 * at + att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}
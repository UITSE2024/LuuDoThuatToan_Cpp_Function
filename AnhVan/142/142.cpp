#include <iostream>
using namespace std;

int SoDaoNguoc(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So dao nguoc cua n: " << SoDaoNguoc(n);
	return 0;
}

int SoDaoNguoc(int nn)
{
	int dn = 0, t = nn;
	while (t)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}

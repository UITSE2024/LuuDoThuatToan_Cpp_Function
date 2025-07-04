#include <iostream>
using namespace std;

int TimDaoNguoc(int);

int main()
{
	int n;
	cout << "\nNhap n = ";
	cin >> n;
	
	int dn = TimDaoNguoc(n);

	if (dn == n)
		cout << "La DX";
	else
		cout << "Ko DX";

	return 0;
}

int TimDaoNguoc(int nn)
{
	int dn = 0;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}
	return dn;
}
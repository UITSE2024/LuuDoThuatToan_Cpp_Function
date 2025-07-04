
#include <iostream>
using namespace std;

void Nhap(float&, float&);
void XuatTangDan(float, float);
int main()
{
	float a, b;
	Nhap(a, b);
	XuatTangDan(a, b);
	return 0;
}

void Nhap(float& aa, float& bb)
{
	cout << "Nhap a: ";
	cin >> aa;
	cout << "Nhap b: ";
	cin >> bb;
}

void XuatTangDan(float a, float b)
{
	if (a > b)
	{
		int tmp = a;
		a = b;
		b = tmp;
	}
	cout << a << "\t" << b;
}
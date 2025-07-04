#include <iostream>
using namespace std;

void XepTangDan(float&, float&, float&);
void Xuat(float, float, float);

int main()
{
	float a, b, c;
	cout << "Nhap a, b, c: ";
	cin >> a >> b >> c;
	cout << "Truoc khi xep tang: ";
	Xuat(a, b, c);
	cout << "\nSau khi xep tang: ";
	XepTangDan(a, b, c);
	Xuat(a, b, c);
	return 0;

}

void XepTangDan(float& aa, float& bb, float& cc)
{
	if (aa > bb)
	{
		int temp = aa;
		aa = bb;
		bb = temp;
	}
	else if (aa > cc)
	{
		int temp = aa;
		aa = cc;
		cc = temp;
	}
	else if (bb > cc)
	{
		int temp = bb;
		bb = cc;
		cc = temp;
	}
}

void Xuat(float aa, float bb, float cc)
{
	cout << "\na = " << aa;
	cout << "\nb = " << bb;
	cout << "\nc = " << cc;
}
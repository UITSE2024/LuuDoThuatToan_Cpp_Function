#include <iostream>
using namespace std;

void XepTangDan(float&, float&, float&);
void Xuat(float, float, float);

int main()
{
	float a, b, c;
	cin >> a >> b >> c;
	cout << "Truoc khi xep tang: ";
	Xuat(a, b, c);
	cout << "\nSau khi xep tang: ";
	XepTangDan(a, b, c);
	Xuat(a, b, c);
	return 0;

}

void XepTangDan(float& a, float& b, float& c)
{
	if (a > b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	else if (a > c)
	{
		int temp = a;
		a = c;
		c = temp;
	}
	else if (b > c)
	{
		int temp = b;
		b = c;
		c = temp;
	}
}

void Xuat(float a, float b, float c)
{
	cout << "\na = " << a;
	cout << "\nb = " << b;
	cout << "\nc = " << c;
}
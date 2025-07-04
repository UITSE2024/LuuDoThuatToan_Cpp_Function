#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&, float&, float&, float&, float&);
bool KtTamGiac(float, float, float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1, x2, y2, x3, y3);
	
	if (KtTamGiac(x1, y1, x2, y2, x3, y3))
		cout << "La tam giac.";
	else
		cout << "Khong la tam giac.";
}

void Nhap(float&x1, float& y1, float& x2, float& y2,float& x3,float& y3)
{
	cout << "Nhap dinh a: ";
	cin >> x1 >> y1;
	cout << "Nhap dinh b: ";
	cin >> x2 >> y2;
	cout << "Nhap dinh c: ";
	cin >> x3 >> y3;
}

bool KtTamGiac(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float c = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	if (a + b > c && a + c > b && b + c > a)
		return true;
	else
		return false;
}
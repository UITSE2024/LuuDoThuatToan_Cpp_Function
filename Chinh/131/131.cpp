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

void Nhap(float&xx1, float& yy1, float& xx2, float& yy2,float& xx3,float& yy3)
{
	cout << "Nhap dinh a: ";
	cin >> xx1 >> yy1;
	cout << "Nhap dinh b: ";
	cin >> xx2 >> yy2;
	cout << "Nhap dinh c: ";
	cin >> xx3 >> yy3;
}

bool KtTamGiac(float xx1, float yy1, float xx2, float yy2, float xx3, float yy3)
{
	float a = sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
	float b = sqrt((xx3 - xx1) * (xx3 - xx1) + (yy3 - yy1) * (yy3 - yy1));
	float c = sqrt((xx3 - xx2) * (xx3 - xx2) + (yy3 - yy2) * (yy3 - yy2));
	if (a + b > c && a + c > b && b + c > a)
		return true;
	else
		return false;
}
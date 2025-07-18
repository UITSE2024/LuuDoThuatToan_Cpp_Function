#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
void Xuat(float, float);
float KhoangCach(float, float, float, float);

int main()
{
	float x1, y1;
	Nhap(x1, y1);
	float x2, y2;
	Nhap(x2, y2);
	cout << "Diem thu nhat: " << endl;
	Xuat(x1, y1);
	cout << endl;
	cout << "Diem thu hai: " << endl;
	Xuat(x2, y2);
	cout << endl;
	cout << "Khoang cach: " << KhoangCach(x1, y1, x2, y2);
}

void Nhap(float& xx, float& yy)
{
	cout << "Nhap hoanh do: ";
	cin >> xx;
	cout << "Nhap tung do: ";
	cin >> yy;
}

void Xuat(float xx, float yy)
{
	cout << "Hoanh do: " << xx << endl;
	cout << "Tung do: " << yy << endl;
}

float KhoangCach(float xx1, float yy1, float xx2, float yy2)
{
	return sqrt((xx2 - xx1) * (xx2 - xx1) + (yy2 - yy1) * (yy2 - yy1));
}
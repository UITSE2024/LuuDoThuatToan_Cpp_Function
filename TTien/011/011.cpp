
#include <iostream>
#include <math.h>
using namespace std;

void Nhap(float&, float&);
void Xuat(float, float);
float DienTich(float, float, float, float, float, float);

int main()
{
	float x1, y1, x2, y2, x3, y3;
	cout << "Nhap diem thu nhat:\n";
	Nhap(x1, y1);
	cout << "Nhap diem thu hai:\n";
	Nhap(x2, y2);
	cout << "Nhap diem thu ba:\n";
	Nhap(x3, y3);
	cout << "Dien tich tam giac: " << DienTich(x1, y1, x2, y2, x3, y3);
	return 0;
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
	cout << "Hoanh do: " << xx;
	cout << "\nTung do: " << yy;
}

float DienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}
#include <iostream>
#include <cmath>
using namespace std;
void Nhap(int&, int&, int&, int&, int&, int&);
float Tinhchuvi(int, int, int, int, int, int);
int main() 
{
	int x1, y1, x2, y2, x3, y3;
	Nhap(x1, y1, x2, y2, x3, y3);
	cout<<"Chu vi: "<<Tinhchuvi(x1, y1, x2, y2, x3, y3);
}
void Nhap(int& x1, int& y1, int& x2, int& y2, int& x3, int& y3)
{
	cout << "Nhap diem thu nhat: " << endl;
	cin >> x1 >> y1;
	cout << "Nhap diem thu hai: " << endl;
	cin >> x2 >> y2;
	cout << "Nhap diem thu ba: " << endl;
	cin >> x3 >> y3;
}
float Tinhchuvi(int x1, int y1, int x2, int y2, int x3, int y3)
{
	float a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	float b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
	float c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	return a + b + c;
}
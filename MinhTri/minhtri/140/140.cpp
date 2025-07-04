#include<iostream>
#include<cmath>
using namespace std;
void Nhap(int&, int&, int&);
float delta(int, int, int);
void Giaiphuongtrinh(int, int, int, float);
int main()
{
	int a, b, c;
	Nhap(a, b, c);
	float del = delta(a, b, c);
	Giaiphuongtrinh(a, b, c, del);
}
void Nhap(int& a, int& b, int& c)
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
	cout << "Nhap c: ";
	cin >> c;
}
float delta(int a, int b, int c)
{
	return b * b - 4 * a * c;
}
void Giaiphuongtrinh(int a, int b, int c, float delta)
{
	if (delta <= 0)
	{
		if (delta == 0)
		{
			float x = float(-b) / (2 * a);
			cout << x;
			return;
		}
		else
		{
			cout << "vo nghiem";
		}
	}
	else 
	{
		float x1 = float(-b + sqrt(delta)) / (2 * a);
		float x2 = float(-b - sqrt(delta)) / (2 * a);
		cout << x1 << " " << x2;
	}
}
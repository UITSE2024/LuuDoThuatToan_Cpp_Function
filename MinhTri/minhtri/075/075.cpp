#include<iostream>
using namespace std;
void Nhap(float&, float&);
float Tinhtong(float, float);
float main() {
	float x, n;
	Nhap(x, n);
	cout << "Tong: " << Tinhtong(x, n);
}
void Nhap(float& x, float& n)
{
	cout << "Nhap x: ";
	cin >> n;
	cout << "Nhap n: ";
	cin >> n;
}
float Tinhtong(float x, float n)
{
	float s = 1;
	float t = 1;
	float m = 1;
	float i = 2;
	while (i <= 2 * n)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + t / m;
		i += 2;
	}
	return s;
}
#include <iostream>
using namespace std;
#define pi 3.14

float DienTich(float);

int main()
{
	float r;
	cin >> r;

	cout << "Dien tich: " << DienTich(r);
	return 0;
}

float DienTich(float rr)
{
	return pi * rr * rr;
}

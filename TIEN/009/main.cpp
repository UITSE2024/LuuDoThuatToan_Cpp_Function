#include<iostream>
#define PI 3.14
using namespace std;
float DienTich(int, float);
int main()
{
	int n;
	float r;
	cin >> n >> r;
	cout<<DienTich(n, r);
}
float DienTich(int n, float r)
{
	return n * r * r * sin(2 * PI) / 2.0;
}
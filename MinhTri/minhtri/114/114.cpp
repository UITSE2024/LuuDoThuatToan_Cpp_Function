#include<iostream>
using namespace std;
float Tinh(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tinh(n);
}
float Tinh(int n)
{
	float at = -2;
	float tt = 3;
	float pp = 7;
	float i = 2;
	float ahh = 0;
	while (i <= n)
	{
		tt *= 3;
		pp *= 7;
		ahh = 5 * at + 2 * tt - 6 * pp + 12;
		i++;
		at = ahh;
	}
	return ahh;
}
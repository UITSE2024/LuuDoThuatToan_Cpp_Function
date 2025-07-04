#include <iostream>
using namespace std;
float Tinh(int n);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tinh(n);
}
float Tinh(int n)
{
	float s = 0;
	float e = 1;
	float i = 1;
	while (e >= 0.000001)
	{
		e = 1 / i;
		s += e;
		i++;
	}
	return s;
}
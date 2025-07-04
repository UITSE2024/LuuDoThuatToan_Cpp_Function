#include <iostream>
using namespace std;

float tinhS(int nn)
{
	float s = 0;
	float e = 0.5;
	int i = 1;
	while (e >= 0.000001)
	{
		e = 1 / (i * (i + 1));
		s = s + e;
		i++;
	}
	return s;
}

int main()
{
	int n; cout << "Nhap n: ";
	cin >> n;
	cout << "S = " << tinhS(n);
	return 0;
}
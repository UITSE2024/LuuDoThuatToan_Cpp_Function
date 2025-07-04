#include <iostream>
using namespace std;

float Tinhtong(int n)
{
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * (1 + 1 / (i * i));
		i = i + 1;
	}
	return t;
}

int main()
{
	cout << "Nhap n: ";
	int n; cin >> n;
	cout << "Tong S(n) = " << Tinhtong(n);
	return 0;
}
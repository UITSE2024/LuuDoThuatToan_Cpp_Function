#include <iostream>
#include <cmath>
using namespace std;

float TinhSn(int);

int main()
{
	int n;
	cin >> n;

	cout << "S(n) = " << TinhSn(n);
	return 0;
}

float TinhSn(int nn)
{
	float s = 0;
	int i = 1;

	while (i <= nn)
	{
		s = sqrt(2 + s);
		i = i + 1;
	}

	return s;
}
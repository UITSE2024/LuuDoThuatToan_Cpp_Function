#include <iostream>
using namespace std;

float Tinh();

int main()
{
	cout << "S(n) = " << Tinh();
	return 0;
}

float Tinh()
{
	float s = 0, e = 1;
	int i = 1;
	float ep = 10e-6;
	while (e >= ep)
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}
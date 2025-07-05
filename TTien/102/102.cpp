
#include <iostream>
using namespace std;

float Tong();

int main()
{
	cout << "Tong: " << Tong();
	return 0;
}

float Tong()
{
	float s = 0;
	float e = 0.5;
	int i = 2;
	while (e >= 1e-6)
	{
		e = 1.0 / i;
		s = s + e;
		i = i + 2;
	}
	return s;
}
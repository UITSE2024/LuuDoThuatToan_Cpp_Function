#include <iostream>
#include <cmath>
using namespace std;

float Tong();

int main()
{
	cout << "Gia tri bieu thuc: " << Tong() << endl;
}

float Tong()
{
	float s = 0;
	int m = 0;
	float e = 1;
	int i = 1;
	float epsilon = pow(10, -6);
	while (e >= epsilon)
	{
		m += i;
		e = 1.0 / m;
		s += e;
		i++;
	}
	return s;
}
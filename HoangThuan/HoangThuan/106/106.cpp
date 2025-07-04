#include <iostream>
using namespace std;
#define pi 3.14

float Sinx(int);

int main()
{
	int x;
	cin >> x;

	cout << "sin(x) = " << Sinx(x);
	return 0;
}

float Sinx(int xx)
{
	float xxx = (xx * pi) / 180;
	float s = xxx;
	float t = xxx;
	int m = 1;
	int dau = -1;
	float e = xxx;
	int i = 3;

	while (e >= 1e-6)
	{
		t = t * xxx * xxx;
		m = m * (i - 1) * i;
		e = t / m;
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}

	return s;
}

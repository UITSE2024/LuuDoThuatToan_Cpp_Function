#include <iostream>
using namespace std;

float Tinhx7(float xx) {
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x7 = x8 / xx;
	return x7;
}

int main()
{
	float x; cin >> x;
	cout << Tinhx7(x);
	return 0;
}
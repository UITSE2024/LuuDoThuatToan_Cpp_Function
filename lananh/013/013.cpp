#include <iostream>
using namespace std;

float Tinhx7(float x) {
	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x7 = x8 / x;
	return x7;
}

int main()
{
	float x; cin >> x;
	cout << Tinhx7(x);
	return 0;
}
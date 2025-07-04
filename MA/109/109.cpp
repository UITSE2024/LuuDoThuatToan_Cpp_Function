#include <iostream>
#include <cmath>
using namespace std;

float Euler();

int main() {
	float e = Euler();
	cout << e << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float Euler() {
	float e = 1.0f;
	float s = 1.0f;
	long long m = 1;
	int i = 1;
	while(e >= 10e-6)
	{
		m = m * i;
		e = 1.0f / m;
		s += e;
		i++;
	}
	return s;
}
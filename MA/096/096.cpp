#include <iostream>
#include <cmath>
using namespace std;

float CanLuyThua(int );

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = CanLuyThua(n);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float CanLuyThua(int nn) {
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= nn) {
		t *= i;
		s += sqrt(s + t);
		i++;
	}
	return s;
}
#include <iostream>
#include <cmath>
using namespace std;

float CanLuyThua(int nn);

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
	for (int i = 1; i <= nn; i++) {
		t *= i;
		s += sqrt(s+t);
	}
	return s;
}
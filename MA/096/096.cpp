#include <iostream>
#include <cmath>
using namespace std;

float CanLuyThua(int n);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = CanLuyThua(n);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float CanLuyThua(int n) {
	float s = 0;
	int t = 1;
	for (int i = 1; i <= n; i++) {
		t *= i;
		s += sqrt(s+t);
	}
	return s;
}
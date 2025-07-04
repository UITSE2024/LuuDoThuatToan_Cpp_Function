#include <iostream>
using namespace std;
float Tinhtich(int n);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Ket qua: " << Tinhtich(n);
}
float Tinhtich(int n) {
	float s = 0;
	float m = 0;
	float i = 1;
	float dau = 1;
	while (i <= n) {
		m += i;
		s += dau / m;
		i++;
		dau = -dau;
	}
	return s;

}
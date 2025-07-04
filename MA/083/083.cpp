#include <iostream>
#include <cmath>
using namespace std;

float tongSinLuyThua(int, int);

int main() {
	float x;
	cout << " Nhap x: ";
	cin >> x;
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = tongSinLuyThua(x, n);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float tongSinLuyThua(int xx, int nn) {
	float s = 0;
	long long t = 1;
	for (int i = 1; i <= nn; i++) {
		t *= xx;
		s += sin(t);
	}
	return s;
}
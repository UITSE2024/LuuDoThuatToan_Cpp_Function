#include <iostream>
#include <cmath>
using namespace std;

bool KiemTraSoToanChan(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (KiemTraSoToanChan(n)) {
		cout << n << " la so toan chan\n";
	}
	else {
		cout << n << " khong phai la so toan chan\n";
	}
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

bool KiemTraSoToanChan(int nn) {
	bool flag = 1;
	int t = nn;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0) {
			flag = 0;
		}
		t /= 10;
	}
	return flag;
}
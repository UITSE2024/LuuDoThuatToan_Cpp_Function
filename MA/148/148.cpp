#include <iostream>
#include <cmath>
using namespace std;

void KiemTraSoToanChan(int n);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	KiemTraSoToanChan(n);
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

void KiemTraSoToanChan(int n) {
	bool flag = 1;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 != 0) {
			flag = 0;
		}
		t /= 10;
	}
	if (flag) {
		cout << n << " la so toan chan\n";
	}
	else {
		cout << n << " khong phai la so toan chan\n";
	}
}
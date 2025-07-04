#include <iostream>
#include <cmath>
using namespace std;

bool namNhuan(int nn);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (namNhuan(n)) {
		cout << n << " la nam nhuan\n";
	}
	else {
		cout << n << " khong phai la nam nhuan\n";
	}
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

bool namNhuan(int nn) {
	bool dk1 = (nn % 4 == 0) && (nn % 100 != 0);
	bool dk2 = (nn % 400 == 0);
	return dk1 || dk2;
}
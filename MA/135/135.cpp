#include <iostream>
#include <cmath>
using namespace std;

bool namNhuan(int n);

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

bool namNhuan(int n) {
	bool dk1 = (n % 4 == 0) && (n % 100 != 0);
	bool dk2 = (n % 400 == 0);
	return dk1 || dk2;
}
#include <iostream>
using namespace std;

int TongUocSoNhoHon(int n);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = TongUocSoNhoHon(n);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

int TongUocSoNhoHon(int n) {
	int s = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			s += i;
		}
	}
	return s;
}
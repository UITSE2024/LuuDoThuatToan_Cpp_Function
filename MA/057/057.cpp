#include <iostream>
using namespace std;

int TongUocSoNhoHon(int nn);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = TongUocSoNhoHon(n);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

int TongUocSoNhoHon(int nn) {
	int s = 0;
	for (int i = 1; i < nn; i++) {
		if (nn % i == 0) {
			s += i;
		}
	}
	return s;
}
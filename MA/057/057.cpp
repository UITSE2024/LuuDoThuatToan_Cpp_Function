#include <iostream>
using namespace std;

int TongUocSoNhoHon(int);

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
	int i = 1;
	while (i <= nn / 2) {
		if (nn % i == 0) {
			s += i;
		}
		i++;
	}
	return s;
}
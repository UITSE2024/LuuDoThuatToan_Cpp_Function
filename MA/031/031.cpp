#include <iostream>
using namespace std;

float tongNghichDaoLe(int);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = tongNghichDaoLe(n);
	cout << "s =" << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float tongNghichDaoLe(int nn) {
	float s = 0;
	int i = 1;
	while (i <= 2 * nn + 1) {
		s += 1.0f / i;
		i += 2;
	}
	return s;
}

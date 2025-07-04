#include <iostream>
using namespace std;

float tongNghichDaoLe(int nn);

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
	for (int i = 1; i <= 2 * nn + 1; i += 2) {
		s += 1.0f / i;
	}
	return s;
}

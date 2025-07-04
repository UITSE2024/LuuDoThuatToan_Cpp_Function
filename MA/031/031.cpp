#include <iostream>
using namespace std;

float tongNghichDaoLe(int n);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = tongNghichDaoLe(n);
	cout << "s =" << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float tongNghichDaoLe(int n) {
	float s = 0;
	for (int i = 1; i <= 2 * n + 1; i += 2) {
		s += 1.0f / i;
	}
	return s;
}

#include <iostream>
using namespace std;

float tongNghichDao4(int nn);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = tongNghichDao4(n);
	cout << "s =" << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float tongNghichDao4(int nn) {
	float s = 0;
	for (int i = 1; i <= 2 * nn + 1; i += 2) {
		s += 1.0f / (i * (i + 1) * (i + 2) * (i + 3));
	}
	return s;
}

#include <iostream>
using namespace std;

float Tinhx12(float xx);

int main() {
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x12 = Tinhx12(x);
	cout << "x^12 = " << x12 << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

float Tinhx12(float xx) {
	float x2 = xx * xx;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	return x8 * x4;
}
#include <iostream>
using namespace std;

float TheTichHinhCau(float rr);

int main() {
	float r;
	cout << "Nhap ban kinh hinh cau: ";
	cin >> r;
	float v = TheTichHinhCau(r);
	cout << "The tich hinh cau la: " << v << endl;
	cout << "\n\n\n Ket thuc !	!!!!\n\n\n";
	return 0;
}

float TheTichHinhCau(float rr) {
	return (4.0f / 3.0f) * 3.14f * rr * rr * rr;
}
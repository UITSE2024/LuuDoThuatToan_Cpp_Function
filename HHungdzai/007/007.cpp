#include<iostream>	

using namespace std;

void chuyenSangDoC(float);

int main() {

	float F;
	cout << "Nhap vao do F: "; cin >> F;

	chuyenSangDoC(F);

	cout << "\n\n\n Ket thuc!!!!!\n\n\n";
	return 0;
}

void chuyenSangDoC(float F) {

	float C = (float)5 / 9 * (F - 32);

	cout << "Do C tuong ung: " << C;
}
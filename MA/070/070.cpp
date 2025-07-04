#include <iostream>
using namespace std;

long long TongLuyThuaChan(int nn, int xx);

int main() {
	int n, x;
	cout << " Nhap x: ";
	cin >> x;
	cout << "Nhap n: ";
	cin >> n;
	long long s = TongLuyThuaChan(n, x);
	cout << s << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

long long TongLuyThuaChan(int nn, int xx) {
	long long s = 0;
	for (int i = 0; i <= 2*nn; i += 2) {
		s += pow(xx, i);
	}
	return s;
}
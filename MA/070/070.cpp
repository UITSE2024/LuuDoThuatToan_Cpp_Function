#include <iostream>
using namespace std;

long long TongLuyThuaChan(int n, int x);

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

long long TongLuyThuaChan(int n, int x) {
	long long s = 0;
	for (int i = 0; i <= 2*n; i += 2) {
		s += pow(x, i);
	}
	return s;
}
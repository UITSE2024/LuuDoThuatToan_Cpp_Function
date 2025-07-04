#include <iostream>
using namespace std;

long long TongLuyThuaChan(int,int);

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
	int i = 1;
	while (i <= nn) {
		s += pow(xx, 2 * i);
		i++;
	}	
	return s;
}
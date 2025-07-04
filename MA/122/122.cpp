#include <iostream>
#include <cmath>
using namespace std;

pair<int,int> TinhDayAB(int n);

int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	pair<long long,long long> s = TinhDayAB(n);
	cout << "a(n) = " << s.first << endl;
	cout << "b(n) = " << s.second << endl;
	cout << "\n\n\n Ket thuc !!!!!\n\n\n";
	return 0;
}

pair<int,int> TinhDayAB(int n) {
	if (n == 1) {
		return { 1, 1 };
	}
	else
	{
		int at = 1, bt = 1;
		for (int i = 2; i <= n; i++) {
			int a = 2*at + 3*bt;
			int b = at + 3 * bt;
			at = a;
			bt = b;
		}
		return { at,bt };
	}
}
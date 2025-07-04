#include <iostream>
using namespace std;

long TongLuyThua(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "S(n) = " << TongLuyThua(n);
	return 0;
}

long TongLuyThua(int nn)
{
	long s = 0;
	for (int i = 1; i <= nn; i++)
		s = s + i * i * i * i;
	return s;
}
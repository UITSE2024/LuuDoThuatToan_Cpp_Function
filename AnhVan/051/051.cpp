#include <iostream>
using namespace std;

long TichUocSo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Tich uoc so cua n: " << TichUocSo(n);
	return 0;
}

long TichUocSo(int n)
{
	long t = 1;
	for (int i = 1; i <= n; i++)
		if (n % i == 0)
			t = t * i;
	return t;
}
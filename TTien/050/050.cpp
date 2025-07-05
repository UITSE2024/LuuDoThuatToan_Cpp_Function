
#include <iostream>
using namespace std;

void Nhap(int&);
int TongUocSo(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Tong uoc so: " << TongUocSo(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int TongUocSo(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i++;
	}
	return s;
}
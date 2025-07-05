
#include <iostream>
using namespace std;

void Nhap(int&);
int Tong(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Tong: " << Tong(n);
	return 0;
}

void Nhap(int& nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int Tong(int nn)
{
	int s = 0;
	int i = 1;
	while (i <= nn)
	{
		s = s + i*i*i;
		i++;
	}
	return s;
}
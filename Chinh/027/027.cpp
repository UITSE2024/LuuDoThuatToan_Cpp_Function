#include <iostream>
using namespace std;

int Tong(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Gia tri bieu thuc: " << Tong(n) << endl;
}

int Tong(int n)
{
	int s = 0;
	int i = 1;
	while (i <= n)
	{
		s += i;
		i++;
	}
	return s;
}
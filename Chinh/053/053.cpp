#include <iostream>
using namespace std;

void XuatUocLe(int);

int main()
{
	int n;
	cin >> n;

	cout << "Cac uoc so le cua n: ";
	XuatUocLe(n);
}

void XuatUocLe(int n)
{
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << " ";
		i += 2;
	}
}
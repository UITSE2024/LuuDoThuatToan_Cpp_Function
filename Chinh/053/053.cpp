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

void XuatUocLe(int nn)
{
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
			cout << i << " ";
		i += 2;
	}
}
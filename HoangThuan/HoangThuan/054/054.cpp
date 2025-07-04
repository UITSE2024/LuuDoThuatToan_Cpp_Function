#include <iostream>
using namespace std;

int TongUocChan(int);

int main()
{
	int n;
	cin >> n;

	cout << "Tong tat ca uoc so chan cua n: " << TongUocChan(n);
	return 0;
}

int TongUocChan(int nn)
{
	int s = 0;
	int i = 2;

	while (i <= nn)
	{
		if (nn % i == 0)
			s = s + i;
		i = i + 2;
	}

	return s;
}

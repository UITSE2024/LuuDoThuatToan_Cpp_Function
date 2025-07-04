#include <iostream>
using namespace std;

long TinhSn(int);

int main()
{
	int n;
	cin >> n;

	cout << "S(n) = " << TinhSn(n);
	return 0;
}

long TinhSn(int nn)
{
	int s = 0;
	int i = 1;

	while (i <= nn)
	{
		s = s + i * (i + 1) * (i + 2);
		i = i + 1;
	}

	return s;
}
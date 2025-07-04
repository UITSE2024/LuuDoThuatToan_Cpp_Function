#include <iostream>
using namespace std;

long TinhSxn(int, int);

int main()
{
	int x, n;
	cin >> x >> n;

	cout << "S(x,n) = " << TinhSxn(x, n);
	return 0;
}

long TinhSxn(int xx, int nn)
{
	int s = 1;
	int t = 1;
	int i = 1;

	while (i <= nn)
	{
		t = t * xx;
		s = s + (i + 1) * t;
		i = i + 1;
	}

	return s;
}

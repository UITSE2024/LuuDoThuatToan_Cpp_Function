#include <iostream>
using namespace std;

float TimAn(int);

int main()
{
	int n;
	cin >> n;

	cout << "So hang thu " << n << " cua day la: " << TimAn(n);
	return 0;
}

float TimAn(int nn)
{
	float at = 2;
	int i = 2;

	float ahh;
	while (i <= nn)
	{
		ahh = (at * at + 2) / (2 * at);
		i = i + 1;
		at = ahh;
	}

	return ahh;
}

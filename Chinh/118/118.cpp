#include <iostream>
using namespace std;

float Tim(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	cout << "So hang thu " << n << " cua day: " << Tim(n) << endl;
}

float Tim(int nn)
{
	float at = 2;
	int i = 2;
	while (i <= nn)
	{
		float ahh = (-9 * at - 24) / (5 * at + 13);
		i++;
		at = ahh;
	}
	return at;
}
#include <iostream>
using namespace std;

void VongLap(int, int&, int&);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh, bhh;
	VongLap(n, ahh, bhh);
	cout << "An: " << ahh << endl;
	cout << "Bn: " << bhh << endl;
	return 0;
}

void VongLap(int nn, int& ahh, int& bhh)
{
	int at = 2;
	int bt = 1;
	int i = 2;
	while (i <= nn)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
}
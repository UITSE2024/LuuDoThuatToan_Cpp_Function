#include <iostream>
using namespace std;

void LietKe(int, int);

int main()
{
	int x, y;
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;

	LietKe(x, y);
	return 0;
}

void LietKe(int xx, int yy)
{
	int n = xx;
	while (n <= yy)
	{
		bool dk1 = (n % 4 == 0) && (n % 100 != 0);
		bool dk2 = (n % 400 == 0);
		if (dk1 || dk2)
			cout << n << " ";
		n = n + 1;
	}
}
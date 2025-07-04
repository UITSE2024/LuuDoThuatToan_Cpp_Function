#include <iostream>
using namespace std;

int demuoc(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	return dem;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So uoc cua " << n << " la : " << demuoc(n);
	return 0;
}
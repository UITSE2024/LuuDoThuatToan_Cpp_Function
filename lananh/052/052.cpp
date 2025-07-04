#include <iostream>
using namespace std;

int demuoc(int nn)
{
	int dem = 0;
	int i = 1;
	while (i <= nn)
	{
		if (nn % i == 0)
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
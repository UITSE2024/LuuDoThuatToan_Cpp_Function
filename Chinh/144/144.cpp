#include <iostream>
using namespace std;

bool KtNguyenTo(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KtNguyenTo(n))
		cout << "La so nguyen to.";
	else
		cout << "Khong la so nguyen to.";
}

bool KtNguyenTo(int n)
{
	int dem = 0;
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i++;
	}
	if (dem == 2)
		return true;
	else
		return false;
}
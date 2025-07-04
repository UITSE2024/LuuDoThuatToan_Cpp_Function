#include <iostream>
using namespace std;

bool KtTonTai(int);

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	if (KtTonTai(n))
		cout << "Ton tai.";
	else
		cout << "Khong ton tai.";	
}

bool KtTonTai(int n)
{
	int flag = 0;
	int t = n;
	while (t != 0)
	{
		int dv = t % 10;
		if (dv % 2 == 0)
			flag = 1;
		t /= 10;
	}
	return flag;
}
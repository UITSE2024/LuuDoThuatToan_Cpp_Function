#include <iostream>
using namespace std;

bool KiemTraSoChinhPhuong(int);

int main()
{
	int n;
	cin >> n;

	if (KiemTraSoChinhPhuong(n))
		cout << "La so chinh phuong";
	else
		cout << "Khong la so chinh phuong";
	return 0;
}

bool KiemTraSoChinhPhuong(int nn)
{
	bool flag = false;
	int i = 0;

	while (i <= nn)
	{
		if (i * i == nn)
			flag = 1;
		i = i + 1;
	}
	return flag;
}

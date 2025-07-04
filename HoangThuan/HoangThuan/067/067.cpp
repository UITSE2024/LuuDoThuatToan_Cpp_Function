#include <iostream>
using namespace std;

bool KiemTraTonTaiChuSoLe(int);

int main()
{
	int n;
	cin >> n;

	bool kt = KiemTraTonTaiChuSoLe(n);
	if (kt)
		cout << "Co ton tai chu so le";
	else
		cout << "Khong ton tai chu so le";
	return 0;
}

bool KiemTraTonTaiChuSoLe(int nn)
{
	bool flag = false;
	
	while (nn != 0)
	{
		int dv = nn % 10;
		if (dv % 2 != 0)
			flag = true;
		nn = nn / 10;
	}

	return flag;
}

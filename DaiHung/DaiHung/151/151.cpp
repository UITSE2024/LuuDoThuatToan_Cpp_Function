#include <iostream>

using namespace std;

int ktDang2m(int);

int main()
{
	int n;
	cout << "\nNhap n: ";
	cin >> n;

	if (ktDang2m(n) == 1)
		cout << "La dang";
	else
		cout << "Ko la dang";


	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

int ktDang2m(int nn)
{
	int flag = 1;
	int t = nn;

	while (t > 1)
	{
		int du = t % 2;
		if (du != 0)
			flag = 0;
		t = t / 2;
	}

	return flag;
}
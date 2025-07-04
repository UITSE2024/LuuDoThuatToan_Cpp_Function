#include <iostream>
using namespace std;

bool isPerfectNum(int nn)
{
	int s = 0;
	int i = 1;
	while (i < nn)
	{
		if (nn % i == 0)
			s += i;
		i++;
	}
	if (s == nn)
		return true;
	return false;
}

int main()
{
	int n; cin >> n;
	if (isPerfectNum(n))
		cout << "Hoan thien";
	else
		cout << "Khong hoan thien";
	return 0;
}
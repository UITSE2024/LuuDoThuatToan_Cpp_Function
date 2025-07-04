#include <iostream>
using namespace std;

bool isPerfectNum(int n)
{
	int s = 0;
	int i = 1;
	while (i < n)
	{
		if (n % i == 0)
			s += i;
		i++;
	}
	if (s == n)
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
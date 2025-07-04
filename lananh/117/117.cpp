#include <iostream>
using namespace std;

float sohangthu(int n)
{
	float att = -1;
	float at = 3;
	int t = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		t = t * 2;
		ahh = 5 * t + 5 * at - att;
		i++;
		att = at;
		at = ahh;
	}
	return ahh;
}

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "So hang thu n: " << sohangthu(n);
	return 0;
}
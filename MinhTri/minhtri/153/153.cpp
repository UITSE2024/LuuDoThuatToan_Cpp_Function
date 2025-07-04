#include<iostream>
using namespace std;
bool Ktra(int);
int main() {
	int n;
	cout << "Nhap n: ";
	cin >> n;
	if (Ktra(n) == true)
		cout << "Co dang";
	else
		cout << "Khong co dang";
}
bool Ktra(int n)
{
	int flag = 1;
	int t = n;
	while (t > 1)
	{
		int du = t % 5;
		if (du != 0)
			flag = 0;
		t /= 5;
	}
	if (flag == 1)
		return true;
	return false;
}
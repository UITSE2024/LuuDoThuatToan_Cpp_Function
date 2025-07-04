#include <iostream>
using namespace std;
void Lietkeuocso(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	Lietkeuocso(n);
}
void Lietkeuocso(int n)
{
	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << i << " ";
		i++;
	}
}
#include <iostream>
using namespace std;
int Hangchuc(int);
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	cout << "Hang chu: " << Hangchuc(n);
}
int Hangchuc(int n)
{
	int hc = (n / 10) % 10;
	return hc;
}
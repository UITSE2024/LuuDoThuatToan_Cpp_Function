#include <iostream>
using namespace std;
void Nhap(int&, int&);
int NhoNhat(int, int);
int main() 
{
	int a, b;
	Nhap(a, b);
	cout << "Gia tri nho nhat: " << NhoNhat(a, b);
}
void Nhap(int& a, int& b) 
{
	cout << "Nhap a: ";
	cin >> a;
	cout << "Nhap b: ";
	cin >> b;
}
int NhoNhat(int a, int b)
{
	int lc = a;
	if (lc > b)
		lc = b;
	return lc;
}
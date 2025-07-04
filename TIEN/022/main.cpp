#include<iostream>
#define PI 3.14
using namespace std;
int DonVi(int);
int main()
{
	int n;
	cin >> n;
	cout << DonVi(n);
}
int DonVi(int n)
{
	return n % 10;
}
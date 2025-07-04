
#include <iostream>
using namespace std;

void Nhap(int&);
int HangTram(int);

int main()
{
	int n;
	Nhap(n);
	cout << "Chu so hang tram: " << HangTram(n);
	return 0;
}

void Nhap(int &nn)
{
	cout << "Nhap n: ";
	cin >> nn;
}

int HangTram(int nn)
{
	int ht = (nn / 100) % 10;
	return ht;
}
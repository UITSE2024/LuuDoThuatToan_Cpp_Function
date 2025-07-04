#include<iostream>

using namespace std;

void tinhGiaTri(int);

int main()
{

	int x; cout << "Nhap vao gia tri cua x: "; cin >> x;

	cout << "Gia tri cua f: "; tinhGiaTri(x);

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

void tinhGiaTri(int x)
{
	if (x >= 5)
		cout << 2 * x * x + 5 * x + 9;
	else
		cout << -2 * x * x + 4 * x - 9;

}
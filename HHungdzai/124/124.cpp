#include<iostream>

using namespace std;

void tinhGiaTri(int);

int main()
{

	int n; cout << "Nhap vao gia tri cua n: "; cin >> n;

	cout << "Gia tri cua ahh va bhh: "; tinhGiaTri(n);

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

void tinhGiaTri(int n)
{
	int at = 2;
	int bt = 1;

	for (int i = 2; i <= n; ++i)
	{
		int ahh = at * at + 2 * bt * bt;
		int bhh = 2 * at * at;

		at = ahh;
		bt = bhh;
	}

	cout << at << ' ' << bt;

}
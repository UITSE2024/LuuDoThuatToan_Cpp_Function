#include<iostream>

using namespace std;

int demSoLuong(int);

int main()
{
	int n;
	cout << "Nhap vao gia tri cua n: "; cin >> n;

	cout << "So luong chu so cua n: " << demSoLuong(n);

	cout << "\n\n\nKet thuc!!!!!\n\n\n";
	return 0;
}

int demSoLuong(int n)
{
	int dem = 0;

	int t = n;

	while (t != 0)
	{
		dem++;
		t /= 10;
	}

	return dem;
}
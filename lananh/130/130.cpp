#include <iostream>
using namespace std;

bool ktTamGiac(int xx, int yy, int zz)
{
	if (xx + yy > zz && xx + zz > yy && yy + zz > xx)
		return true;
	return false;
}

int main()
{
	float x, y, z;
	cout << "Nhap do dai 3 canh cua tam giac:";
	cin >> x >> y >> z;
	bool isTamGiac = ktTamGiac(x, y, z);
	if (isTamGiac == 1)
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";
	return 0;
}
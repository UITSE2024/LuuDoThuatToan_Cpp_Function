#include <iostream>
using namespace std;

bool ktTamGiac(int x, int y, int z)
{
	if (x + y > z && x + z > y && y + z > x)
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
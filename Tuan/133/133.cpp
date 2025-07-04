#include <iostream>
using namespace std;

void ktTamGiac(float, float, float);

int main()
{
	float x, y, z;
	cout << "\nNhap x = ";
	cin >> x;
	cout << "\nNhap y = ";
	cin >> y;
	cout << "\nNhap z = ";
	cin >> z;

	ktTamGiac(x, y, z);

	return 0;
}

void ktTamGiac(float xx, float yy, float zz)
{
	if (xx + yy > zz && yy + zz > xx && zz + xx > yy)
		if (xx == yy && yy == zz)
			cout << "Deu";
		else
			if (xx * xx == yy * yy + zz * zz
				|| yy * yy == xx * xx + zz * zz
				|| zz * zz == yy * yy + xx * xx)
				if (xx == yy || yy == zz || zz == xx)
					cout << "Vuong can";
				else
					cout << "Vuong";
			else
				if (xx == yy || yy == zz || zz == xx)
					cout << "Can";
				else
					cout << "Thuong";
		else
			cout << "Ko";
}
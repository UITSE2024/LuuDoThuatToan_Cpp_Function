#include <iostream>
#include <cmath>
using namespace std;

void Nhap(float&, float&);
float TinhDienTich(float, float, float, float, float, float);
bool KiemTraThuocTamGiac(float, float, float, float, float, float, float, float);

int main()
{
	float xA, yA;
	Nhap(xA, yA);
	float xB, yB;
	Nhap(xB, yB);
	float xC, yC;
	Nhap(xC, yC);
	float xM, yM;
	Nhap(xM, yM);

	if (KiemTraThuocTamGiac)
		cout << "M nam trong";
	else
		cout << "M nam ngoai";
	return 0;
}

void Nhap(float& x, float& y)
{
	cin >> x >> y;
}

float TinhDienTich(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return	abs(x1 * y2 + x2 * y3 + x3 * y1 - x2 * y1 - x3 * y2 - x1 * y3) / 2;
}

bool KiemTraThuocTamGiac(float xxA, float yyA, float xxB, float yyB, float xxC, float yyC, float xxM, float yyM)
{
	float SABC = TinhDienTich(xxA, yyA, xxB, yyB, xxC, yyC);
	float SMAB = TinhDienTich(xxM, yyM, xxA, yyA, xxB, yyB);
	float SMBC = TinhDienTich(xxM, yyM, xxB, yyB, xxC, yyC);
	float SMCA = TinhDienTich(xxM, yyM, xxC, yyC, xxA, yyA);

	float S = SMAB + SMBC + SMCA;
	return S == SABC;
}

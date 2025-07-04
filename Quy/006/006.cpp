#include <iostream>
using namespace std;

float CSangF(float);

int main()
{
	float c;
	cout << "Nhap do C: ";
	cin >> c;

	cout << "Do F: " << CSangF(c);
	return 0;
}

float CSangF(float cc)
{
	return 9 * cc / 5 + 32;
}
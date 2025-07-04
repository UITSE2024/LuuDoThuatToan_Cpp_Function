#include <iostream>

using namespace std;

double tinh_f(double);

int main()
{
    double x;
    cout << "Nhap x: ";
    cin >> x;

    double f = tinh_f(x);
    cout << "Gia tri f(x) = " << f << endl;

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

double tinh_f(double x)
{
    if (x < 0) 
        return -2 * x * x * x + 6 * x + 9;
    else if (x <= 1)
        return 5 * x - 7;
    else 
        return 2 * x * x * x + 5 * x * x - 8 * x + 3;
}
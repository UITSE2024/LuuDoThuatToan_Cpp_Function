#include <iostream>
#include <iomanip>

using namespace std;

double tinh_PI_BBP();

int main()
{
    double pi = tinh_PI_BBP();
    cout << fixed << setprecision(6);
    cout << "Gia tri gan dung cua PI = " << pi << endl;

	cout << "\n\n\nKet Thuc!!!!!\n\n\n";
	return 0;
}

double tinh_PI_BBP() 
{
    double s = 4.0 - 2.0 / 4 - 1.0 / 5 - 1.0 / 6;
    double t = 1.0;
    double e = 1.0;
    int i = 1;

    while (fabs(e) >= 1e-6) 
    {
        t = t * 16;
        double term1 = 4.0 / (8 * i + 1);
        double term2 = 2.0 / (8 * i + 4);
        double term3 = 1.0 / (8 * i + 5);
        double term4 = 1.0 / (8 * i + 6);
        e = (term1 - term2 - term3 - term4) / t;
        s = s + e;
        i = i + 1;
    }

    return s;
}
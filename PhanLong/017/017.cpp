#include <iostream>

using namespace std;

float TinhX11(float xx);

int main()
{
    float x;
    cin >> x;
    float x11 = TinhX11(x);
    cout << x11;
    return 0;
}

float TinhX11(float xx)
{
    float x2 = xx * xx;
    float x4 = x2 * x2;
    float x8 = x4 * x4;
    float x10 = x8 * x2;
    float x11 = x10 * xx;
    return x11;
}
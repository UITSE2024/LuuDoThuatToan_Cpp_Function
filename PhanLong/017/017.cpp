#include <iostream>

using namespace std;

float TinhX11(float x);

int main()
{
    float x;
    cin >> x;
    cout << TinhX11(x);
    return 0;
}

float TinhX11(float x)
{
    float x2 = x * x;
    float x4 = x2 * x2;
    float x8 = x4 * x4;
    float x10 = x8 * x2;
    float x11 = x10 * x;

    return x11;
}
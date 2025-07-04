#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>

using namespace std;

float TinhDienTichXungQuanh(float rr);

int main()
{
    float r;
    cin >> r;
    float s = TinhDienTichXungQuanh(r);
    cout << s;
}

float TinhDienTichXungQuanh(float rr)
{
    return 4 * M_PI * rr * rr;
}

#include <iostream>
#include <cmath>

using namespace std;

float Tinh(int x, int n);

int main()
{
    float x, n;
    cin >> x >> n;
    cout << Tinh(x, n);
    return 0;
}

float Tinh(int x, int n)
{
    float s = 0;
    float t = 1;
    float i = 1;
    while (i <= n)
    {
        t = t * sin(x);
        s = s + t;
        i = i + 1;
    }
    return s;
}
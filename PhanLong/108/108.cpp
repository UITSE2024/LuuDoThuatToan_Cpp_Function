#include <iostream>

using namespace std;

float TinhEX(int x);

int main()
{
    int x;
    cin >> x;
    float ex = TinhEX(x);
    cout << ex;
    return 0;
}

float TinhEX(int x)
{
    float s = 1;
    float e = 1.0f;
    int t = 1;
    int m = 1;
    int i = 1;
    while (e >= 1e-6)
    {
        t = t * x;
        m = m * i;
        e = (float)t / m;
        s = s + e;
        i = i + 1;
    }
    return s;
}
#include <iostream>
#include <cmath>

using namespace std;

float Tinh(int xx, int nn);

int main()
{
    float x, n;
    cin >> x >> n;
    int s = Tinh(x, n);
    cout << s;
    return 0;
}

float Tinh(int xx, int nn)
{
    float s = 0;
    float t = 1;
    float i = 1;
    while (i <= nn)
    {
        t = t * sin(xx);
        s = s + t;
        i = i + 1;
    }
    return s;
}
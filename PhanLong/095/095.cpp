#include <iostream>
#include <cmath>

using namespace std;

float Tinh(int n);

int main()
{
    int n;
    cin >> n;
    cout << Tinh(n);
    return 0;
}

float Tinh(int n)
{
    float s = 0;
    int i = n;
    while (i > 0)
    {
        s = sqrt(i + s);
        i = i - 1;
    }
    return s;
}
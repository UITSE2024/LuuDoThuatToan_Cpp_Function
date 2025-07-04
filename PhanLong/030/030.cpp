#include <iostream>

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
    for (int i = 2; i <= 2 * n; i = i + 2)
    {
        s = s + (float)1 / i;
    }
    return s;
}
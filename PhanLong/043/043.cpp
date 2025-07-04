#include<iostream>

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
    int i = 1;

    while (i <= n)
    {
        s += 1.0 / (i * (i + 1) * (i + 2));
        i = i + 1;
    }

    return s;
}
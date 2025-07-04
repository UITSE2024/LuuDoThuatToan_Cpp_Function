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

    for (int i = 1; i <= n; ++i)
        s += 1.0 / (i * (i + 1) * (i + 2));

    return s;
}
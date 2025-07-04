#include <iostream>

using namespace std;

float Tinh(int n);

int main()
{
    int n;
    cin >> n;
    int s = Tinh(n);
    cout << s;
    return 0;
}

float Tinh(int n)
{
    float s = 0;
    int i = 2;
    while (i <= 2 * n)
    {
        s = s + 1.0f / i;
        i = i + 2;
    }
    return s;
}
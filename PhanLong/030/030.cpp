#include <iostream>

using namespace std;

float Tinh(int nn);

int main()
{
    int n;
    cin >> n;
    int s = Tinh(n);
    cout << s;
    return 0;
}

float Tinh(int nn)
{
    float s = 0;
    int i = 2;
    while (i <= 2 * nn)
    {
        s = s + 1.0f / i;
        i = i + 2;
    }
    return s;
}
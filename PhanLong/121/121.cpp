#include <iostream>

using namespace std;

int Tinh(int n);

int main()
{
    int n;
    cin >> n;
    cout << Tinh(n);
    return 0;
}

int Tinh(int n)
{
    int att = 1;
    int at = 1;
    int i = 2;
    int ahh = 1;
    while (i <= n)
    {
        ahh = at + att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    return ahh;
}

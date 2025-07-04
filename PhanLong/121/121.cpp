#include <iostream>

using namespace std;

int Fibonacci(int nn);

int main()
{
    int n;
    cin >> n;
    int ahh = Fibonacci(n);
    cout << ahh;
    return 0;
}

int Fibonacci(int nn)
{
    int att = 1;
    int at = 1;
    int i = 2;
    int ahh = 1;
    while (i <= nn)
    {
        ahh = at + att;
        i = i + 1;
        att = at;
        at = ahh;
    }
    return ahh;
}

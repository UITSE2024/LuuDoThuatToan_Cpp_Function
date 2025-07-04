#include <iostream>

using namespace std;

int Tinh(int xx, int nn);

int main()
{
    int n;
    int x;
    cin >> n >> x;
    int s = Tinh(x, n);
    cout << s;
    return 0;
}

int Tinh(int xx, int nn)
{
    int t = 1;
    int s = 0;
    int i = 1;
    while (i <= nn)
    {
        t = t * xx;
        s = s + t;
        i = i + 1;
    }
    return s;
}
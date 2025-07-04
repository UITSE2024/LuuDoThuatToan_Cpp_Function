#include <iostream>
using namespace std;

int chusonhonhat(int n)
{
    int lc = n % 10;
    int t = n;
    while (t != 0)
    {
        int dv = t % 10;
        if (dv < lc)
            lc = dv;
        t = t / 10;
    }
    return lc;
}

int main()
{
    int n; cin >> n;
    cout << "Chu so nho nhat cua n la: ";
    cout << chusonhonhat(n);
    return 0;
}
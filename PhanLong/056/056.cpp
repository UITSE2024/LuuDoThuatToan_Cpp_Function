#include <iostream>

using namespace std;

int DemSoUocChan(int n);

int main()
{
    int n;
    cin >> n;
    cout << DemSoUocChan(n);
    return 0;
}

int DemSoUocChan(int n)
{
    int dem = 0;
    int i = 2;

    while (i <= n)
    {
        if (n % i == 0)
            dem = dem + 1;
        i = i + 2;
    }

    return dem;
}

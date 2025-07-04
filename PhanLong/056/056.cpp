#include <iostream>

using namespace std;

int DemSoUocChan(int nn);

int main()
{
    int n;
    cin >> n;
    int dem = DemSoUocChan(n);
    cout << dem;
    return 0;
}

int DemSoUocChan(int nn)
{
    int dem = 0;
    int i = 2;

    while (i <= nn)
    {
        if (nn % i == 0)
            dem = dem + 1;
        i = i + 2;
    }

    return dem;
}

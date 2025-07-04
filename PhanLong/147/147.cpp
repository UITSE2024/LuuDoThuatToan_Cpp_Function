#include <iostream>

using namespace std;

bool KiemTraToanLe(int nn);

int main()
{
    int n;
    cin >> n;
    
    if (KiemTraToanLe(n))
        cout << "Toan le";
    else
        cout << "Khong toan le";

    return 0;
}

bool KiemTraToanLe(int nn)
{
    int flag = 1;
    int  t = nn;
    
    while (t != 0)
    {
        int dv = t % 10;
        if (dv % 2 == 0)
            flag = 0;
        t = t / 10;
    }
    
    if (flag == 1)
        return true;
    else
        return false;
}

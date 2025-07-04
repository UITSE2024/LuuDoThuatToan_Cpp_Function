#include <iostream>

using namespace std;

bool KiemTraBatDangThuc(int a, int b, int c);

int main()
{
    int x;
    int y;
    int z;
    cin >> x >> y >> z;
    
    if (KiemTraBatDangThuc(x, y, z))
        cout << "Bat dang thuc dung";
    else
        cout << "Bat dang thuc khong dung";

    return 0;
}

bool KiemTraBatDangThuc(int a, int b, int c)
{
    if (a <= b && b <= c)
        return true;
    else
        return false;
}

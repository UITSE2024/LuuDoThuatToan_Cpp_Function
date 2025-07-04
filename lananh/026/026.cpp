#include <iostream>
using namespace std;

void HoanVi(int& aa, int& bb)
{
    aa = aa + bb;
    bb = aa - bb;
    aa = aa - bb;
}

int main()
{
    int a, b;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    HoanVi(a, b);
    return 0;
}
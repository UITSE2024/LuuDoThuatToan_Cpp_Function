#include <iostream>
using namespace std;

float tinhS(float x, int n)
{
    float s = 1;
    float t = 1;
    int i = 1;
    while (i <= n)
    {
        t = t * x;
        s = s + t;
        i++;
    }
    return s;
}

int main()
{
    int n;
    float x;
    cout << "Nhap x: "; cin >> x;
    cout << "Nhap n: "; cin >> n;
    cout << "Tong s : " << tinhS(x, n);
    return 0;
}
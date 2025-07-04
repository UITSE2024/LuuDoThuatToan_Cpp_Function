#include <iostream>
#include <cmath>

using namespace std;

float Tinh(int nn);

int main()
{
    int n;
    cin >> n;
    int s = Tinh(n);
    cout << s;
    return 0;
}

float Tinh(int nn)
{
    float s = 0;
    int i = nn;
    while (i > 0)
    {
        s = sqrt(i + s);
        i = i - 1;
    }
    return s;
}
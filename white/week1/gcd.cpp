#include <iostream>
#include <string>

void gcd (unsigned int &x, unsigned int &y);

using namespace std;

int main() {
    unsigned int a, b;
    cin >> a >> b;

    gcd(a, b);

    cout << a + b;
    return 0;
}

void gcd (unsigned int &x, unsigned int &y)
{
    while (x > 0 && y > 0)
    {
        if (x > y)
            x = x % y;
        else
            y = y % x;
    }
}
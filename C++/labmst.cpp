#include <iostream>
using namespace std;

inline void MAX(float a, float b, float c)
{
    if (a > b && a > c)
    {
        cout << a << " is the largest number.\n";
    }
    else if (b > a && b > c)
    {
        cout << b << " is the largest number.\n";
    }
    else if (c > a && c > b)
    {
        cout << c << " is the largest number.\n";
    }
}

inline void MIN(float a, float b, float c)
{
    if (a < b && a < c)
    {
        cout << a << " is the smallest number.\n";
    }
    else if (b < a && b < c)
    {
        cout << b << " is the smallest number.\n";
    }
    else if (c < a && c < b)
    {
        cout << c << " is the smallest number.\n";
    }
}

int main()
{
    float a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    MAX(a, b, c);
    MIN(a, b, c);
    cout << "Name: ANKAN DAS\nUID: 20BCS5394\n";
    return 0;
}

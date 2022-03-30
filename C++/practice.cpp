#include <iostream>
using namespace std;
inline void large(int a, int b, int c)
{
    if (a > b)
    {
        if (a > c)
        {
            cout <<"a is greatest";
        }
        else
        {
            cout <<"c is greatest";
        }
    }
    else
    {
        if (b > c)
        {
            cout <<"b is greatest";
        }
        else
        {
            cout <<"C is greatest";
        }
    }
}
void main()
{
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    large(a, b, c);
}

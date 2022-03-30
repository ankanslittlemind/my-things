#include <stdio.h>
int fun(int );
int main()
{
    int i = 35, *z;
    z = fun(&i);
    printf("%d", z);
    return 0;
}
int fun(int m)
{
    return (m + 2);
}
#include <stdio.h>
void fibo(int, int , int);
int main()
{
    int old=1, current=1;
    printf("%d\n%d\n", old, current);
    fibo(old, current, 23);
    return 0;
}
void fibo(int old, int current, int term)
{
    int new;
    if (term>=1)
    {
        new = old + current;
        printf("%d\n", new);
        term=term-1;
        fibo(current, new, term);
    }
}

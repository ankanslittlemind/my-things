#include <stdio.h>
void shift(int *, int *, int *);
int main()
{
    int x, y, z;
    printf("Enter three number : \n");
    scanf("%d %d %d", &x, &y, &z);
    shift(&x, &y, &z);
    printf("%d %d %d", x, y, z);
    return 0;
}
void shift(int *a, int *b, int *c)
{
    int t;
    t = *b;
    *b = *c;
    *c = *a;
    *a = t;
}

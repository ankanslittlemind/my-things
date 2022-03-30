#include<stdio.h>
void math(int *, int *, int *, int *);
int main()
{
    int a, b, c=1 , d=1;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    while (d!=0)
    {
        math(&a,&b,&c,&d);
        printf("%d\n",b);
    }
    printf("%d",b);
    return 0;
}
void math(int *a, int *b, int *c, int *d)
{
    *c = (*a)/(*b);
    *d = (*a)-(*c)*(*b);
    *a=*b;
    *b=*d;
}
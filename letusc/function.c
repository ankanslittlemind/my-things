#include<stdio.h>
int sum(int a, int b);
int main()
{
    int a, b, plus;
    printf("Enter number a : ");
    scanf("%d",&a);
    print("Enter number b : ");
    scanf("%d",&b);
    plus=sum(a,b);
    printf("The sum of a and b is %d",plus);
    return 0;
}

int sum(int a, int b)
{
    int d;
    d=a+b;
    return (d);
}
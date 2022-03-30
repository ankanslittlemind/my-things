#include <stdio.h>
float power(float, int);
int main()
{
    float a, pow;
    int b;
    printf("Enter base number : ");
    scanf("%f", &a);
    printf("Enter exponent number : ");
    scanf("%d", &b);
    pow = power(a, b);
    printf("Answer is %f", pow);
    return 0;
}
float power(float a, int b)
{
    int i;
    float p = 1;
    for (i = 1; i <= b; i++)
        p = p * a;
    return (p);
}
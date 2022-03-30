//C program to calculate area of triangle of three given sides
#include <stdio.h>
#include <math.h>
float area(float, float, float, int);
int main()
{
    float a, b, c, ar;
    int s;
    printf("Enter three sides of triangle : \n");
    scanf("%f %f %f", &a, &b, &c);
    s=(a+b+c)/2;
    ar=area(a,b,c,s);
    printf("Area is %f", &ar);
    return 0;
}
float area(float a, float b, float c, int s)
{
    float ar;
    ar=(s(s-a)(s-b)(s-c));
    return (ar);
}
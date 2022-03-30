#include <stdio.h>
#include <math.h>
void math(int, int, int, int, int, int, int, int, float *, int *);
float dis(int, int, int, int); 
float area(float, float, float);
int position(float, float, float, float);
int main()
{
    int x1, x2, x3, y1, y2, y3, x, y;
    float ar = 0;
    int p = 0;
    printf("Enter A coordinate : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter B coordinate : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter C coordinate : ");
    scanf("%d %d", &x3, &y3);
    printf("Enter arbitratory points: ");
    scanf("%d %d", &x, &y);
    math(x1, x2, x3, y1, y2, y3, x, y, &ar, &p);
    printf("Area is %f\n", ar);
    if (p == 1)
        printf("Point is inside.\n");
    else
        printf("Point is outside.\n");
    return 0;
}
void math(int x1, int x2, int x3, int y1, int y2, int y3, int x, int y, float *ar, int *p)
{
    float a, b, c, d, e, f, A, B, C;
    a=dis(x1,x2,y1,y2);
    b=dis(x2,x3,y2,y3);
    c=dis(x3,x1,y3,y1);
    d=dis(x,x1,y,y1);
    e=dis(x,x2,y,y2);
    f=dis(x,x3,y,y3);
    *ar=area(a,b,c);
    A=area(d,e,a);
    B=area(e,f,b);
    C=area(f,d,c);
    *p=position(A,B,C,*ar);
}
float dis(int a, int b, int c, int d)
{
    return(sqrt(pow(a-b,2)+pow(c-d,2)));
}
float area(float a, float b, float c)
{
    float s;
    s=(a+b+c)/2;
    return (sqrt(s*(s-a)*(s-b)*(s-c)));
}
int position(float A, float B, float C, float ar)
{
    if (ar=(A+B+C))
    return (1);
    else
    return (0);
}
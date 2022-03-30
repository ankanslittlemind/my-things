#include<stdio.h>
#include<math.h>
float math(int, int, int, int);
int main()
{
    int x1, x2, x3, y1, y2, y3; 
    float a, b, c;
    printf("Enter A coordinate : ");
    scanf("%d %d", &x1, &y1);
    printf("Enter B coordinate : ");
    scanf("%d %d", &x2, &y2);
    printf("Enter C coordinate : ");
    scanf("%d %d", &x3, &y3);
    a=math(x1,x2,y1,y2);
    b=math(x2,x3,y2,y3);
    c=math(x3,x1,y3,y1);
    printf("a is %f\n",a);
    printf("b is %f\n",b);
    printf("c is %f\n",c);
    return 0;
}
float math(int a, int b, int c, int d)
{
    float dis;
    dis=sqrt(pow(a-b,2)+pow(c-d,2));
    return(dis);
}
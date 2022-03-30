#include<stdio.h>

int gcd(int a, int b)

{
    if (b == 0)
    return a;
    return gcd(b, a % b);
}

int main()

{
    int x,y,total_work,lcm;
    printf("Enter no. of days taken by 1st person to complete the task:\n");
    scanf("%d",&x);
    printf("Enter no. of days taken by 2nd person to complete the task:\n");
    scanf("%d",&y);
    total_work= gcd(x,y);
    lcm = (x*y)/(total_work);
    total_work = (lcm/x) + (lcm/y);
    printf("\nNumber of days in which work is complete: %d",lcm/total_work);
    return 0;
}
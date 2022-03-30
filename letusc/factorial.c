#include <stdio.h>
int factorial();
int main()
{
    int num, y;
    printf("Enter number : ");
    scanf("%d", &num);
    y = factorial(num);
    printf("Factorial of number is : %d", y);
    return 0;
}
int factorial(int num)
{
    int f = 1, i = 1;
    for (i = 1; i <= num; i++)
        f = f * i;
    return (f);
}
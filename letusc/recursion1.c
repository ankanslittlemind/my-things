#include<stdio.h>
int sum(int);
int main()
{
    int num, result;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    result = sum(num);
    printf("%d", result);
    return 0;
}
int sum(int num)
{
    int r, plus;
    if (num!=0){
    r = num % 10;
    plus = r + sum(num/10);
    }
    else
    {
        return 0;
    }
    return plus;
}
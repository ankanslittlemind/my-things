#include "stdio.h"
int main()
{
    int num, i;
    printf("Enter number : ");
    scanf("%d", &num);
    printf("Prime factors are : \n");
    for (i = 2; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
            num = num / i;
        }
    }
    return 0;
}
#include <stdio.h>
int main()
{
    int n, i, max = 0, k = 0, b = 0;
    printf("Enter number of candles : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter heights of %d candles : ", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (i = 0; i < n; i++)
    {
        if (a[i] == max)
        {
            k++;
        }
    }
    printf("The number of tallest candle is %d", k);
}
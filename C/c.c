#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int arr[n];
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for (int i=0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    return 0;
}

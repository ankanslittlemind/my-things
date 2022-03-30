#include <stdio.h>
int main()
{
    int l, cl, n;
    printf("Enter length of cube: ");
    scanf("%d",&l);
    printf("Enter cut length: ");
    scanf("%d",&cl);
    n=l/cl;
    printf("The number of cubes formed: %d",n*n*n);
    return 0;
}
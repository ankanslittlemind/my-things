#include<stdio.h>
int main()
{
    int hours,pay,i=1;
    while (i<=3)
    {
        printf("Worker no.%d\n",i);
        printf("Enter hours of works: ");
        scanf("%d",&hours);
        if (hours>40)
        {
            pay=(hours-40)*12;
            printf("Overtime pay: Rs.%d\n\n",pay);
        }
        else 
        {
            printf("No overtime pay.\n\n");
        }
        ++i;
    }
    
    return 0;
}
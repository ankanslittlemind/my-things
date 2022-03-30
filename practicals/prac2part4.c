#include<stdio.h>
#include<string.h>

int main()
{

    int num, num3, month;

    printf("Enter the month (1-12) : ");
    scanf("%d",&month);

    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)

        {
            printf("Enter the day you want to find (1-31) : ");
            scanf("%d",&num);
            if(1<=num<=31)
            {
            if((31-num)%7==0)
            printf("The day is friday");

            if((31-num)%7==1)
            printf("The day is Thursday");

            if((31-num)%7==2)
            printf("The day is Wednesday");
            
            if((31-num)%7==3)
            printf("The day is Tuesday");

            if((31-num)%7==4)
            printf("The day is Monday");

            if((31-num)%7==5)
            printf("The day is Sunday");

            if((31-num)%7==6)
            printf("The day is Saturday");
            }
            else
            {
            printf("Input data is invalid.");
            }
        }

    if(month==4||month==6||month==9||month==11)

        {
            printf("Enter the day you want to find (1-30) : ");
            scanf("%d",&num);
            if(1<=num<=30)
            {
            if((30-num)%7==0)
            printf("The day is friday");

            if((30-num)%7==1)
            printf("The day is Thursday");

            if((30-num)%7==2)
            printf("The day is Wednesday");

            if((30-num)%7==3)
            printf("The day is Tuesday");

            if((30-num)%7==4)
            printf("The day is Monday");

            if((30-num)%7==5)
            printf("The day is Sunday");

            if((30-num)%7==6)
            printf("The day is Saturday");
            }
            else
            {
            printf("Input data is invalid.");
            }
        }

    if(month==2)

        {
            printf("Enter the day you want to find (1-28) : ");
            scanf("%d",&num3);
            if(1<=num3<=28)
            {
            if((28-num3)%7==0)
            printf("The day is friday");

            if((28-num3)%7==1)
            printf("The day is Thursday");

            if((28-num3)%7==2)
            printf("The day is Wednesday");

            if((28-num3)%7==3)
            printf("The day is Tuesday");

            if((28-num3)%7==4)
            printf("The day is Monday");

            if((28-num3)%7==5)
            printf("The day is Sunday");

            if((28-num3)%7==6)
            printf("The day is Saturday");
            }
            else
            {
            printf("Input data is invalid.");
            }
        }

    else 
        {
            if (month<1 || month>12)
            printf("Input data is invalid.");
            
        }

    return 0;
    
}
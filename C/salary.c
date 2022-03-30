#include<stdio.h>
int main()
{
    int yos, sal;
    char g, q;
    
    printf("Enter years of service : ");
    scanf("%d",&yos);
    printf("Enter gender (m for male & f for female) : ");
    scanf("%c",&g);
    printf("Enter qualification (p for post graduate & g for graduate) : ");
    scanf("%c",&q);

    if (g=='f' && yos<10 && q=='g')
    sal = 6000;
    else if (g=='m' && yos<10 && q=='g')
    sal = 7000;
    else if (g=='f' && yos>=10 && q=='g')
    sal = 9000;
    else if ((g=='m' && yos>=10 && q=='g') || (g=='m' && yos<10 && q=='p') || (g=='f' && yos<10 && q=='p')) 
    sal = 1000;
    else if (g=='f' && yos>=10 && q=='p')
    sal = 12000;
    else if (g=='m' && yos>=10 && q=='p')
    sal = 15000;

    printf("The salary given is : %d", sal);

    return 0;
}
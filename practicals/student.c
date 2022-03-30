#include<stdio.h>

int main()

{
    char name[20];
    int age;
    long long int contact_num;
    float percentage;

    printf("Hi there, hope you doing well.\n");

    printf("Please enter your name: ");
    scanf("%[^\n]s",&name);
    printf("Enter you age: ");
    scanf("%d",&age);
    printf("Now enter your contact number: ");
    scanf("%lld",&contact_num);
    printf("Please enter your 12th board percentage: ");
    scanf("%f",&percentage);

    printf("=========Student's Database=========\n");
    printf("Student name      : %s\n",name);
    printf("Age of student    : %d\n",age);
    printf("Contact number    : %lld\n",contact_num);
    printf("Percentage in 12th: %f\n",percentage);
    printf("=================End================");

    return 0;
}
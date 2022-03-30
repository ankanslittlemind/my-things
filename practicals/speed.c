#include<stdio.h>
int main()
{
    int km;
    float time,car_speed;

    printf("Enter distance in km between point A and B: ");
    scanf("%d",&km);
    printf("Enter time in mins lost by train: ");
    scanf("%f",&time);
    car_speed=(60*km)/(3*time);
    printf("Speed of the car is: %f\n",car_speed);
    
    return 0;
}
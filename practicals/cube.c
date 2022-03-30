#include<stdio.h>
int main()
{
    int side_length, cut_length, divided_num, number_cube;
    
    printf("Enter the side length of the painted cube in cm: ");
    scanf("%d",&side_length);
    
    printf("Enter the side length in which cube is cut into in cm: ");
    scanf("%d",&cut_length);
    
    divided_num=side_length/cut_length;
    number_cube=divided_num*divided_num*divided_num;

    printf("The number of smaller cubes: %d\n",number_cube);

    return 0;
}
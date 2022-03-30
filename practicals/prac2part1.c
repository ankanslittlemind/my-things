#include<stdio.h>

int main()

{
  int a,b,c;
  float x,y,z;
  float t1,t2,t3;
  float s1,s2,s3;

  printf("Enter Ram's amount of loan, rate and time : ");
  scanf("%d%f%f",&a,&x,&t1);  
  printf("Enter Mohan's amount of loan, rate and time : ");
  scanf("%d%f%f",&b,&y,&t2);
  printf("Enter Sohan's amount of loan, rate and time : ");
  scanf("%d%f%f",&c,&z,&t3);

  s1=(a*x*t1)/100;
  s2=(b*y*t2)/100;
  s3=(c*z*t3)/100;

  printf("Ram pay interest   = %f\n",s1);
  printf("Mohan pay interest = %f\n",s2);
  printf("Sohan pay interest = %f\n",s3);
  
  printf("Maximum interest paid by : ");
  s1>s2?(s1>s3?printf("Ram"):printf("Sohan")):(s2>s3?printf("Mohan"):printf("Sohan"));

   return 0;   
}


#include<stdio.h>
#include<ctype.h>
int main()
{
   char post1,post2;
   int m,n,result;

   printf("Enter the postion of Sonu from top: ");
   scanf("%c",&post1);
   printf("Enter the postion of Sonu from bottom: ");
   scanf(" %c",&post2);
   m=toupper(post1)-64;  
   n=toupper(post2)-64;
   result=m+n-1;
   printf("How many students are there in the class : %d ",result);

   return 0;   
}
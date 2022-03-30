#include <stdio.h>
int main()

{ 
  int m, y, n, r;

  printf("Enter the values of m, y(1900<=y<=2019), n, r(1<=r<=12): ");
  scanf("%d %d %d %d",&m,&y,&n,&r);

   int birth_year, class;

   birth_year = y+m-n;

   printf("Mr. Kavi's Year of Birth is %d",birth_year);

   if ( r <= 12 && r >= 1)
   {    
      class = r+n-m;

      if (class<1)
      {         
        printf("\nMr. Kavi is in Pre Primary");
      }

      else if (class>12)
      {
        printf("\nMr. Kavi is in College but class cannot be predicted.");
      }

      else
      {
        printf("\nMr. Kavi is in class %d", class);
      }  

    return 0; 
   }
   
   else
   { 
      printf("\nThe Value of r is outside the defined constraint!");
   }

 return 0;

}
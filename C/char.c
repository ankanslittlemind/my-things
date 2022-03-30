#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main() {
   char str[50];

   printf("Enter a string with spaces : ");
   gets(str);

   printf("%s", str);

   return 0;
}
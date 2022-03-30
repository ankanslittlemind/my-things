#include <stdio.h>
int main()
{
 int a, hun, fif, ten, five, two, one, notes;
 printf("Enter amount: ");
 scanf("%d",&a);
 hun = a/100;
 a = a%100;
 fif = a/50;
 a = a%50;
 ten = a/10;
 a = a%10;
 five = a/5;
 a = a%5;
 two = a/2;
 a= a%2;
 one = a/1;
 notes = hun+fif+ten+five+two+one;
 printf("Total number of notes: %d\n",notes);
 return 0;
}
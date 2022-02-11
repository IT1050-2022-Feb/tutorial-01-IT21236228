/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() {
  int sumOfRange(int);
 
int main() 
{
   int n1;
   int sum;
	printf("\n\n Recursion : calculate the sum of numbers from 1 to n :\n");
	printf("-----------------------------------------------------------\n");    
 
   printf(" Input the last number of the range starting from 1 : ");
   scanf("%d", &n1);
 
   sum = sumOfRange(n1); 
   printf("\n The sum of numbers from 1 to %d : %d\n\n", n1, sum);
 
   return (0);
}
 
int sumOfRange(int n1) 
{
   int res;
   if (n1 == 1) 
   {
      return (1);
   } else 
   {
      res = n1 + sumOfRange(n1 - 1); //calling the function sumOfRange itself
   }
   return (res);
}
  


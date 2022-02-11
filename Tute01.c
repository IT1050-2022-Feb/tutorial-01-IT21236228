/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int mark1, mark2, total;
	float avg;
	
	printf("mark 1: \n"); //student1
	scanf("%d",&mark1);
	
	printf("mark 2: \n");
	scanf("%d",&mark2);
	
	total = mark1 + mark2;
	avg = total/2;
	
	printf("average mark of the student is %.2f",avg);
  return 0;
}


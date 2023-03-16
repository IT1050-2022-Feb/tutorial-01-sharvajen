/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the
   average of the two marks. */

#include <stdio.h>

int main(void) {
  int mark1, mark2;
  float average;

  printf("enter the markes1:");
  scanf(" %d", &mark1);
  printf("enter the markes2:");
  scanf(" %d", &mark2);
  average = (float)(mark1 + mark2) / 2.0;
  printf("the average of markes:%.2f", average);

  return 0;
}

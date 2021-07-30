/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  double mark1,mark2;
  double avrg;

  printf("enter your mark 01 :-");
  scanf(" %lf",&mark1);
  printf("enter your mark 02:-");
  scanf("  %lf",&mark2);

  avrg= (mark1 + mark2) /2;

  printf("avarage :- %lf ",avrg);

  return 0;
}


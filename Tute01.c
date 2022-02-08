/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int sub1_marks ,sub2_marks ,total ;
  float avg ;

  printf("Enter the marks of the 1st subject :") ;
  scanf("%d",&sub1_marks) ;

  printf("Enter the marks of the 2nd subject :") ;
  scanf("%d",&sub2_marks) ;

  total =  sub1_marks + sub2_marks ;
  avg   = total/2.0 ;

  printf("Average : %.2f",avg) ;
   
  return 0;
}


#include<stdio.h>
#include"myhead.h"
 
int main() {
   int num1 = 10, num2 = 10, num3;
   num3 = add(num1, num2);
   printf("Addition of Two numbers : %d", num3);

   return (0);
}

#include <stdio.h>

int main()
{
   int num1,num2,sum,diff,mul;
   float division;
   printf("Enter first number:");
   scanf("%d",&num1);
   printf("Enter second number:");
   scanf("%d",&num2);
   sum=num1+num2;
   diff=num1-num2;
   mul=num1*num2;
   division=1.0*sum/2;
   printf("summision =%d\nDifference=%d\nMlutiplication=%d\nDivision=%.2f",sum,diff,mul,division);
   return 0;
}

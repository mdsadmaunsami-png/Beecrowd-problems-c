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

or

# include <stdio.h>
int main() 
{ 
    int  num1, num2,sum,diff,mult;
    printf(" enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    mult = num1 * num2;
    printf(" sum = %d\ndiff = %d\nmult = %d\ndiv = %.2f", sum, diff, mult, (float)sum / 2);
    return 0;
}

or

# include <stdio.h>
int main() 
{ 
    float  num1, num2,sum,diff,mult,div;
    printf(" enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    sum = num1 + num2;
    diff = num1 - num2;
    mult = num1 * num2;
    div = sum/2;
    printf(" sum = %.2f\ndiff = %.2f\nmult = %.2f\ndiv = %.2f", sum, diff, mult, div);
    return 0;
}

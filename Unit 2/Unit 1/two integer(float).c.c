#include<stdio.h>
int main ()
{
    float a;
    float b;
    
     printf("ENTER THE A :");
     scanf("%f", &a);
     
       printf("ENTER THE B :");
     scanf("%f", &b);
     
     printf("SUM = %.2f\n", a + b);
     printf("SUM = %.2f\n", a - b);
     printf("SUM = %.2f\n", a * b);
     if(b != 0)
     {
         printf("QUOTIENT : %.2f\n", a/b);
     }
     else 
     {
         printf("Division by zero error.\n");
     }
     return 0;
}
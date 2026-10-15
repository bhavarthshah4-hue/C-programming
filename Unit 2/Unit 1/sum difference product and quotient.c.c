#include<stdio.h>
int main ()
{
    int a;
    int b;
    
     printf("ENTER THE A :");
     scanf("%d", &a);
     
       printf("ENTER THE B :");
     scanf("%d", &b);
     
     printf("SUM = %d\n", a + b);
     printf("SUM = %d\n", a - b);
     printf("SUM = %d\n", a * b);
     if(b != 0)
     {
         printf("QUOTIENT : %.2f\n", (float) a/b);
     }
     else 
     {
         printf("Division by zero error.\n");
     }
     return 0;
}
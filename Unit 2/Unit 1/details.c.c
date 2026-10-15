#include<stdio.h>
int main ()
{ int num;
  char name, branch;
  
    printf("ENTER THE NAME = ");
    scanf("%s", name);
    
     printf("ENTER THE ROLL NO. = ");
     scanf("%d", &num);
    
     printf("ENTER THE BRANCH = ");
     scanf("%s", branch);
    
    printf("NAME : %s\n", name);
    printf("ROLL NO. : %d\n", num);
    printf("BRANCH : %s\n", branch);
    
    return 0;
}
#include<stdio.h>

int main() {
   int i,j,row;
   printf("enter row number  ");
   scanf("%d",&row);
  for (i=1;i<=row;i++)
  {
  
    for(j=i;j<=row;j++)
    {
        printf(" ");
    }
    for(j=1;j<=i;j++)
    {
        printf("*");
    }
     
     printf("\n");
  }

    
    return 0;
}

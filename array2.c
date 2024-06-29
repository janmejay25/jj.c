#include<stdio.h>
int main() {
    int n,i,last;
   
   printf("enter number of elements");
   scanf("%d",&n);

int array[n+1];
   printf("enter the %d elements",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
   }
  

   printf("enter last element ");
 scanf("%d",&last);
 array[n]=last;
 for(i=0;i<=n;i++){
    printf("array is %d\n",array[i]);
 }
return 0;
}
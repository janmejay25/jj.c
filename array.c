#include <stdio.h>

int main() {
    int n,i,max,count=0;

   
   printf("enter number of elements");
   scanf("%d",&n);

 int array[n];
   printf("enter the %d elements",n);
   for(i=0;i<n;i++)
   {
    scanf("%d",&array[i]);
   }


//    printf("which element");
//    scanf("%d",&max);



   max=array[0];
   for(i=0;i<n;i++){
   if(array[i]>max){
    max=array[i];
   }
   }
   printf("largest valuue is %d",max);
// for(i=0;i<n;i++)
//    {
//     if(array[i]==x){
//     count++;
//    }
//    }
  
//    printf("the copy is %d",count);
//   for(i=n-1;i>=0;i--) 
//    {
//     printf("%d",array[i]);
//   }
    return 0;
}



  

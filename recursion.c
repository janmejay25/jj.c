//we used recursion on this program 
#include<stdio.h>
int sum(int a,int b);
int fact(fo);
int pow(int base, int expo);
int main(){
   int a,b;
    printf("enter the base    ");
     scanf("%d",&a);
     printf("enter the expo    ");
     scanf("%d",&b);
      printf("enter the expo %d   ",pow(a,b));
//   printf("enter the number    ");
//   scanf("%d",&a);
//   printf("factorial of %d is %d",a,fact(a));

}
int pow(int base, int expo){
    if(expo==0){
        return 1;
    }else{
        return base*pow(base,expo-1);
    }
}
int fact(fo){
    if(fo==0){
        return 1;
    };
    int fom1 = fact(fo-1);
    int fac = fom1 * fo;
    return fac;
}

int sum(int a,int b){
    return a+b;
}
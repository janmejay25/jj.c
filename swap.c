#include<stdio.h>
int main()
{
    int a=5,b=3,c;
    c=a,
    a=b,
    b=c;
    printf("swap 5 and 3 is %d and %d",a,b);
    return 0;

    
}
#include<stdio.h>
int temp(cel);
int area(radius);
int main(){
    int t;
    printf("enter temp in cel");
    scanf("%d",&t);
    printf("the temp in cel is %d",t);
    printf("the temp in fer is %d",temp(t));


}
int area(radius){
   radius = 3.14 * radius * radius;
   return radius;
};
int temp(cel){
    cel = 1.8*cel+32;
    return cel;
}

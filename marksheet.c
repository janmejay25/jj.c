#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{

    int a,roll[1];
    char studentname[50];
    int m1,m2,m3,m4,total,percent;
    for(a=1;a<=3;a++){
    printf("enter the student name:\n");
    scanf("%s",&studentname);
    printf("enter the roll number:\n");
    scanf("%d",&roll[a]);
    printf("enter maths marks:\n");
    scanf("%d",&m1);
    printf("enter prog. marks:\n");
    scanf("%d",&m2);
    printf("enter PCS marks:\n");
    scanf("%d",&m3);
    printf("enter FOE marks:\n");
    scanf("%d",&m4);
    total=m1+m2+m3+m4;
    percent=(total*100)/400;
    printf("%d\n",percent);
    printf("%d\n",total);

    }
    return 0;
}
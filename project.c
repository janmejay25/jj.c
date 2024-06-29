#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void addstudent(int roll, const char *name,int age);
void disstudent();
void filestudent();
struct student{
    int roll;
    char name[50];
    int age;
};

struct student students[10];
int numStudent = 0;

int main(){
     
addstudent(25,"jay",20);
addstudent(28,"bhavesh",21);
filestudent();

// disstudent();
 
return 0;
}
void addstudent(int roll, const char *name,int age){
    students[numStudent].roll = roll;
    strcpy(students[numStudent].name ,name);
    students[numStudent].age = age;
    numStudent++;
    printf("student added\n");
};
// void disstudent(){
//     for(int i=0;i<numStudent;i++){
//     printf("student name :%s\n roll :%d\n age : %d\n",students[i].name,students[i].roll,students[i].age);
//     }
// };
void filestudent(){
     FILE *file;
     file = fopen("newtxt.txt", "w");
     fprintf(file, "name\troll\tage\n");
  for(int i=0;i<numStudent;i++){
     
    fprintf(file, "%s\t\t%d\t%d\n", students[i].name,students[i].roll,students[i].age);
    // fprintf(file, "roll no : %d\n", students[i].roll);
    // fprintf(file, "age: %d\n", students[i].age);
    }
    fclose(file);
}
#include<stdio.h>
int main(){
    struct student {
    char name[64];
    int roll[64];
    float cgpa[64];
  };
    struct student s1;
        printf("enter name,rollno. and cgpa of student 1:");
        scanf("%c %d %f",s1.name,s1.roll,s1.cgpa);
        printf("name is:%c rollno.:%d cgpa:%f",s1.name,s1.roll,s1.cgpa);
        return 0;
}
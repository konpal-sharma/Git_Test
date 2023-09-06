#include<stdio.h>
struct marks{
    int rollno;
    char name[30];
    float pmarks, cmarks, mmarks;
}
int main(){
    struct marks[5];
    for(int i=0;i<4;i++){
        printf("student %d\n",i+1);
        printf("enter roll no.:\n");
        scanf("%d",&marks[i].rollno);
        printf("enter name:\n");
        scanf("%s",&marks[i].name);
        printf("enter pmarks:\n");
        scanf("%d",&marks[i].pmarks);
        printf("enter cmarks:\n");
        scanf("%d",&marks[i].cmarks);
        printf("enter mmarks:\n");
        scanf("%d",&marks[i].mmarks);

    }
    for(i=0;i<4;i++){
        printf("student %d\n",i+1);
        printf()
    }
}
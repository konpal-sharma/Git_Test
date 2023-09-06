#include<stdio.h>
void printarray(int *);
int main(){
    int a[]={10,20,30,40,50};
    printarray(a);
    printf("array in main\n");
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]);
    }
}
void printarray(int *ptr){
    printf("In function\n");
    for(int i=0;i<5;i++){
        printf("%d\n",*ptr);
        //ptr++;
        //*ptr++;
        (*ptr)++;
    }
}
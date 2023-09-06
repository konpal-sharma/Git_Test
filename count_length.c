#include<stdio.h>
void printstring(char arr[]);
int count_length(char arr[]);
int main(){
    char name[100];
    printf("enter a string : ");
    fgets(name,100,stdin);
    printf("length is : %d",count_length(name));
    
    return 0;
}
int count_length(char arr[]){
    int count=0;
    for(int i=0;arr[i]!='\0';i++){
        count++;
    }
    return count-1;
}
void printstring(char arr[]){
    for(int i=0;arr[i]!='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}
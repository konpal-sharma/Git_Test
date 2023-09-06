#include<stdio.h>
int main(){
    char str[100];
    int i;
    printf("enter a string:");
    fgets(str,100,stdin);
    for(i=0;i<=100;i++){
        if(str[i]>=65&&str[i]<=90){
            str[i]+=32;
        }
    }
    printf("Given string in lower case....\n");
    puts(str);

    return 0;
}
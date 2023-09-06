#include<stdio.h>
int armstrong(int num){
    int l=0;
    int p=0;
    int sum=0;
    int n=num;
    while(n!=0){
        l=n%10;
        p=l*l*l;
        sum+=p;
        n/=10;
    }
    if(sum==num){
        return 0;
    }
    else{
        return 1;
    }
}
int main(){
    int num;
    printf("enter number:");
    scanf("%d",&num);
    if(armstrong(num)==0){
        printf("%d is an armstrong number", num);
    }
    else{
        printf("%d is not an armstrong number",num);
    }
}
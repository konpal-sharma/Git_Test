#include<stdio.h>
int chk_palindrome(int);
int main(){
    int m,y;
    scanf("%d",&m);
    y=chk_palindrome(m);
    if(y==1){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}
int chk_palindrome(int n){
    int r,temp,sum=0;
    temp=n;
    while(n>0){
        r=n%10;
        sum=(sum*10)+r;
        n/=10;
    }
    if(temp==sum){
        printf("yes");
        return 1;
    }
    else{
        printf("no");
        return 0;
    }
}
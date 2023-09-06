#include<stdio.h>
int main(){
    int i,j,n,a,upp,low;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a);
        }
        if(j>i&&a!=0){
            upp=1;
        }
        if(j<i&&a!=0){
            low=1;
        }
    }
    if(upp==1||low==0){
        printf("upper triangular matrix");
    }
    else{
        printf("lower triangular matrix");
    }
    return 0;
}

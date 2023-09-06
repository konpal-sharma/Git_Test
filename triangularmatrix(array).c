#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int i,j,upp=0,low=0;
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i>j){
                if(a[i][j]==0){
                    upp=1;
                }
            }
            else{
                if(a[i][j]==0){
                    low=1;
                }
            }
        }
    }
    if(upp==1&&low==0){
        printf("upper triangular matrix");
    }
    else{
        printf("lower triangular matrix");
    }

    return 0;
}
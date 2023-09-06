#include<stdio.h>
int main(){
    int i,j,n,f=0;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j){
                if(a[i][j]==0){
                    f=1;
                }
            }
            else{
                if(a[i][j]!=0){
                    f=1;
                }
            }
        }
    }
    if(f==1){
        printf("no");
    }
    else{
        printf("yes");
    }

    return 0;
}
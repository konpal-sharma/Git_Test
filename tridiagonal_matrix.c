#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(i==j || i+1==j || i==j+1){
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
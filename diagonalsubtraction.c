#include<stdio.h>
int main(){
    int n,sum=0,sum1=0;
    scanf("%d",&n);
    int a[n][n];
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0,j=0;i<n,j<n;i++,j++){
        sum+=a[i][j];
    }
    for(i=0,j=n-1;i<n,j>0;i++,j--){
        sum1+=a[i][j];
    }
    if(sum1>sum){
        printf("%d",sum1-sum);
    }
    else{
        printf("%d",sum-sum1);
    }

    return 0;
}
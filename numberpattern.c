#include<stdio.h>
int main(){
int n;
scanf("%d",&n);  
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j <= n; j++) {

            if(j>9){
                printf("%d ",j%10);
            }
            else{
                printf("%d ", j);
            }  
        }
        printf("\n");
        
    }
    return 0;
}

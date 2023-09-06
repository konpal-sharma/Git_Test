#include<stdio.h>
int main(){
    int x,y,z,i;
    x=16, y=12;
    // while(y>0){
    //     z=x%y;
    //     x=y;
    //     y=z;
    // }
    // printf("%d",x);
    for(i=0;y>0;i++){
        z=x%y;
        x=y;
        y=z;
    }
    printf("%d",x);
    return 0;
}
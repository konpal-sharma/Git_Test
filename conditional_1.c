#include<stdio.h>
int main(){
    float unit;
    scanf("%f",&unit);
    if(unit>0&&unit<=200){
        printf("%f",unit*0.50);
    }
    else if(unit>=201&&unit<=400){
        printf("%f",100+(unit*0.65));
    }
    else if(unit>=401&&unit<=600)
    printf("%f",230+(unit*0.80));

    else
    printf("%f",390+(unit*1.00));
    
    return 0;
}
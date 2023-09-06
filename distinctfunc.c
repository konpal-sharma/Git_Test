// #include<stdio.h>
// int fact1(int);
// int fact2(int);
// int fact3(int);
// int main(){
//     int n,r;
//     scanf("%d",&n);
//     scanf("%d",&r);
//     int k=n-r;
//     int a=fact1(n);
//     int b=fact2(r);
//     int c=fact3(k);
//     int w=a/(b*c);
//     printf("%d",w);
//     return 0;
// }
// int fact1(int m){
//     int i,fact=1;
//     for(i=1;i<=m;i++){
//         fact=fact*i;
//     }
//     return fact;
// }
// int fact2(int p){
//     int j,fact=1;
//     for(j=1;j<=p;j++){
//         fact=fact*j;
//     }
//     return fact;
// }
// int fact3(int q){
//     int l,fact=1;
//     for(l=1;l<=q;l++){
//         fact=fact*l;
//     }
//     return fact;
// }
//program to choose k objects from n distinct objects...
#include<stdio.h>
int fact(int val){
    int f=1;
    while(val>1){
        f=f*val;
        val--;
    }
    return f;
}
int main(){
    int n,k,total;
    scanf("%d %d",&n,&k);
    total=(fact(n))/(fact(k)*fact(n-k));
    printf("%d",total);
    return 0;
}

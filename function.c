/*the function which is called in main function should be 
defined above the main function if no prototype has been writtened of it.*/
//1. No return without arguements
#include<stdio.h>
void add(void);
int main(){
    add();
    return 0;
}
void add(){
    int a,b;
    scanf("%d  %d",&a,&b);
    printf("%d",a+b);
}
//2. No return with arguements
#include<stdio.h>
void add(int, int);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    add(a,b);
    return 0;
}
void add(int x, int y){
    int z=x+y;
    printf("%d",z);
}
//3. Return without arguements
#include<stdio.h>
int add();
int main(){
    int a,b;
    printf("%d",add());
    return 0;
}
int add(){
    int x,y;
    scanf("%d %d",&x,&y);
    return(x+y);
}
//4. Return with arguements
#include<stdio.h>
int add(int, int);
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int c=add(a,b);
    printf("%d",c);
    return 0;
}
int add(int x, int y){
    int z=x+y;
    return z;
}
/*return with arguements is mostly used so that further calculations or any operation can be done within the main function
...no need to change the user defined function*/

//function prototype is used to reduce time and save energy in mapping the whole code...



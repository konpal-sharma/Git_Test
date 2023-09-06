#include<stdio.h>
int main(){
    int numbers[10];
    int i;
    printf("Enter 10 natural numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &numbers[i]);
    }
    printf("Entered numbers:\n");
    for (i = 0; i < 10; i++) {
        if (numbers[i] == 10) {
            printf("Skipping number 10.\n");
            continue;
        }
        printf("%d\n", numbers[i]);
    }
}
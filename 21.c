// 21. Program to display first 15 natural numbers and their sum using For Loop
#include<stdio.h>
int main(){
    int sum = 0;
    for(int i=1; i<=15; i++){
        printf("%d\n", i);
        sum += i;
    }
    printf("sum of the first 15 natural numbers = %d\n", sum);

    return 0;
}

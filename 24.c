// 24. Program to find factorial of given number.
#include<stdio.h>
int factorial(int x){
    if(x == 0 || x == 1){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}
int main(){
    int a;
    printf("enter a value\n");
    scanf("%d", &a);
    printf("%d\n", factorial(a));

    return 0;
}

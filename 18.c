// 18. Program to find the given number is even or odd
#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num%2 == 0){
        printf("Even\n");
    }
    else{
        printf("Odd\n");
    }

    return 0;
}

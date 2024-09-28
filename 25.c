// 25. Program to find whether a
// given number is prime or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num%num == 0 && num%2!= 0 || num == 2){
        printf("PRIME\n");
    }
    else{
        printf("NOT PRIME\n");
    }

    return 0;
}

// or else


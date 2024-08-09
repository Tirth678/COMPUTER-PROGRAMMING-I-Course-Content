// 32. Program to find f-actorial of given
// number using function.
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
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    printf("%d\n", factorial(num));

    return 0;
}

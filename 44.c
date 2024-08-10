// 44. Write a program in C to add numbers using call by reference.
#include<stdio.h>
int add(int *x, int *y){
    int result;
    result = *x+*y;
    return result;
}
int main(){
    int a,b;
    printf("enter any 2 values: ");
    scanf("%d %d", &a, &b);
    printf("sum of 2 numbers = %d\n",add(&a, &b));


    return 0;
}

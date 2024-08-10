// 43. Write a program in C to add two numbers using pointers
#include<stdio.h>
int main(){
    int a,b,result;
    int *ptr1 = &a;
    int *ptr2 = &b;
    printf("enter values of a and b: ");
    scanf("%d %d", ptr1, ptr2);
     result = *ptr1+*ptr2;
    printf("sum of the 2 numbers = %d\n", result);

    return 0;
}

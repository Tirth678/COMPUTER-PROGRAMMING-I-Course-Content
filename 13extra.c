// // 13. Program to show swapping of 2 numbers using a third variable
#include<stdio.h>
int main(){
    int a,b;
    printf("enter any two values\n");
    scanf("%d %d", &a, &b);
    printf("values before swap = %d and %d\n", a,b);
    int t = a;
    a = b;
    b = t;
    printf("values after swap = %d and %d\n", a,b);

    return 0;
}

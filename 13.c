// 13. Program to show swapping of 2 numbers using a third variable
#include<stdio.h>
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
int a,b;
printf("enter any two values\n");
scanf("%d %d", &a, &b);
printf("values before swap = %d %d\n", a,b);
swap(&a, &b);
printf("values after swap = %d %d\n", a,b);
    return 0;
}

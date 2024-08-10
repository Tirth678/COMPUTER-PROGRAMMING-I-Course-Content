// 35. Program to show call by reference.
#include<stdio.h>
int swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main(){
    int a,b;
    printf("enter any 2 values to swap\n");
    scanf("%d %d", &a, &b);
    printf("values before swap = %d and %d\n",a ,b);
    swap(&a, &b);
    printf("values after swap = %d and %d\n", a,b);

    return 0;
}

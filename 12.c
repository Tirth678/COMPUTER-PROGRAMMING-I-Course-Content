// 2.Program to show swapping of 2
// numbers without using the third variable.
#include<stdio.h>
int main(){
int a,b;
printf("enter 2 values\n");
scanf("%d %d", &a, &b);
printf("values before swap %d and %d\n",a,b);
a = a + b;
b = a - b;
a = a - b;
printf("values after swap %d and %d\n", a,b);

    return 0;
}

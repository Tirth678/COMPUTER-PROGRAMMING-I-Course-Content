// 34. Program to show call by value.
#include<stdio.h>
int swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}
int main(){
    int a,b;
    printf("enter two values\n");
    scanf("%d %d", &a, &b);
    swap(a, b);
    printf("value after swap = %d %d\n", a,b);

    return 0;
}
// so this is a call by value function and this is a function knows as SWAP which is responsible for swapping 2 values
// if 1,2 are as inputs than 2,1 should be the output
// so i have decleared 2 variables named a and b and now i am passing the direct values expecting the function to swap through but its not working

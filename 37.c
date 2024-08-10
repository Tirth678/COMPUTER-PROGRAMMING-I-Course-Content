// 37. Write a program to show how similar name variables can be used in different functions.
#include <stdio.h>
void function1() {
    int number = 10;
    printf("Inside function1: number = %d\n", number);
}
void function2() {
    int number = 20;
    printf("Inside function2: number = %d\n", number);
}
int main() {
    function1();
    function2();
    return 0;
}

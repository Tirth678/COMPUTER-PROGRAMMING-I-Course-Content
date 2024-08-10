// 42. Write a program in C to demonstrate the use of &(address of) and *(value at address) operator.
#include<stdio.h>
int main() {
    int num = 10;
    int *ptr;
    // Address-of operator (&)
    ptr = &num; // Assign the address of num to ptr
    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", &num);
    printf("Value stored in ptr (address of num): %p\n", ptr);
    // Dereference operator (*)
    printf("Value at the address stored in ptr: %d\n", *ptr);
    // Modifying value through pointer
    *ptr = 20;
    printf("Modified value of num: %d\n", num);
    return 0;
}




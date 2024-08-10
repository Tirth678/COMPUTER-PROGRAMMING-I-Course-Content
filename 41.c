// 41. Write a program in C to demonstrate how to handle the pointers in the program.
#include <stdio.h>
int main() {
    // Declare variables
    int num = 10;
    int *ptr; // Pointer to an integer
    // Assign the address of num to the pointer
    ptr = &num;
    // Print the value of num using the pointer
    printf("Value of num using pointer: %d\n", *ptr);
    // Modify the value of num through the pointer
    *ptr = 20;
    printf("Modified value of num: %d\n", num);
    // Pointer arithmetic (incrementing pointer)
    int arr[5] = {1, 2, 3, 4, 5};
    ptr = arr; // Pointer to the first element of the array
    printf("First element of the array: %d\n", *ptr);
    ptr++; // Increment pointer to point to the next element
    printf("Second element of the array: %d\n", *ptr);
    // Array name as a constant pointer
    printf("Address of the array: %p\n", arr);
    printf("Value of arr (pointer to first element): %p\n", arr);
    // Pointer to a pointer
    int **ptr_to_ptr;
    ptr_to_ptr = &ptr;
    printf("Value of ptr (address of num): %p\n", *ptr_to_ptr);
    return 0;
}
// i hope you got it ;

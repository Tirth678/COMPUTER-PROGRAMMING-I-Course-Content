// 45. Write a program in C to store n elements in an array and print the elements using pointer.
#include <stdio.h>
int main() {
    int n, i;
    int *ptr;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    printf("Elements of the array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");
    return 0;
}

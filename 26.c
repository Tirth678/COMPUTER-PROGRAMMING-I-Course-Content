// 26. Program to create an array of 10 elements. Show the sum and average of 10 elements entered by the user.
#include <stdio.h>
int main() {
    int arr[10];
    int sum = 0;
    float average;
    printf("Enter 10 elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    average = sum / 10.0;
    printf("\nSum of the elements: %d\n", sum);
    printf("Average of the elements: %.2f\n", average);

    return 0;
}

// 36. Program to find the largest among two using functions.
#include <stdio.h>
int find_largest(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}
int main() {
    int num1, num2, largest;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    largest = find_largest(num1, num2);
    printf("The largest number is: %d\n", largest);
    return 0;
}

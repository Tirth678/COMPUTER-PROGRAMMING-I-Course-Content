#include <stdio.h>
int main(){
    int marks;
    printf("Enter the marks obtained by the student (out of 100): ");
    scanf("%d", &marks);
    switch (marks / 10) {
        case 10:
        case 9:
            printf("Percentage: %d%%\n", marks);
            printf("Grade: A\n");
            break;
        case 8:
            printf("Percentage: %d%%\n", marks);
            printf("Grade: B\n");
            break;
        case 7:
            printf("Percentage: %d%%\n", marks);
            printf("Grade: C\n");
            break;
        case 6:
            printf("Percentage: %d%%\n", marks);
            printf("Grade: D\n");
            break;
        default:
            printf("Percentage: %d%%\n", marks);
            printf("Grade: F\n");
            break;
            }
    return 0;
}

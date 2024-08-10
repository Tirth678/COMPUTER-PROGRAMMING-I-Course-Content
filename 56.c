// 56. Write a program to append content at the end of file.
#include <stdio.h>

int main() {
    FILE *fptr;
    char data[100];
    fptr = fopen("my_file.txt", "a");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    printf("Enter data to append: ");
    fgets(data, 100, stdin);
    fputs(data, fptr);
    fclose(fptr);
    printf("Data appended to file successfully.\n");
    return 0;
}

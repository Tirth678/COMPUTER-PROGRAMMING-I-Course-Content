// 55. Write a program to read contents from a file.
#include <stdio.h>

int main() {
    FILE *fptr;
    char ch;
    fptr = fopen("my_file.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    while ((ch = fgetc(fptr)) != EOF) {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}

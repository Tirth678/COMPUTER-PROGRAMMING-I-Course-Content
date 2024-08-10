// 48. Write a program to demonstrate declaration of structures.
#include <stdio.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

int main() {
    struct Student s1;
    s1.rollno = 1;
    strcpy(s1.name, "Your Name");
    s1.marks = 95.5;
    printf("Student Details:\n");
    printf("Roll No: %d\n", s1.rollno);
    printf("Name: %s\n", s1.name);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}

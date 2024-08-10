// 53. Write a program to demonstrate how pointers will be used to create and access structure
#include <stdio.h>
struct Student {
    int roll_no;
    char name[20];
    float marks;
};
int main() {
    struct Student s1 = {1, "Alice", 95.5}; // a eaiser way to store info in struct
    struct Student *ptr;
    // Pointer pointing to the structure s1
    ptr = &s1;
    // Accessing structure members using pointer
    printf("Student Information:\n");
    printf("Roll No %d\n", ptr->roll_no);
    printf("Name %s\n", ptr->name);
    printf("Marks %.2f\n", ptr->marks);
    return 0;
}

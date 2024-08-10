// 52. Write a program to demonstrate nested structures.
#include <stdio.h>
#include<string.h>
struct Date {
    int day;
    int month;
    int year;
};
struct Person {
    char name[50];
    struct Date birthdate;
};
int main() {
    struct Person person1;
    person1.birthdate.day = 15;
    person1.birthdate.month = 4;
    person1.birthdate.year = 1990;
    strcpy(person1.name, "Your Name");
    printf("%s was born on %d/%d/%d\n", person1.name, person1.birthdate.day, person1.birthdate.month, person1.birthdate.year);
    return 0;
}

// 49. Write a program to store student information using Structure.
#include<stdio.h>
#include<string.h>
struct student{
    int marks;
    int rollno;
    int seatnum;
    char name[20];
    char branch[20];
};
int main(){
    struct student joe;
    joe.marks = 100;
    joe.rollno = 69;
    joe.seatnum = 4312;
    strcpy(joe.name, "Joe");
    strcpy(joe.branch, "CSE");
    // now you can print any information about student joe, enjoy! ;)
    printf("%d\n", joe.marks);
    printf("%s\n", joe.branch);

    return 0;
}

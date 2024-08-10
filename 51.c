// 51. Write a program to store 10 student’s information using structures.
#include<stdio.h>
#include<string.h>
struct students{
    int marks;
    char name[50];
    int division;
    char branch[50];
    int rollno;
};
int main(){
    struct students s1,s2; // here you can create as many strucures as you want
    s1.rollno = 12;
    s1.division = 1;
    strcpy(s1.name, "Gol mol");
    strcpy(s1.branch, "CSE");
    s2.rollno = 13;
    s2.division = 2;
    strcpy(s2.name, "Lol mol");
    strcpy(s2.branch, "CSE");

    return 0;
}

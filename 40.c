// 40. Write a program in C to show the basic declaration of pointer
// what is a pointer?
// it is a normal variable that just stores the MOEMORY LOCATION of another defined variable
// example as follows
// a pointer can be defined by many ways: int *i, int* i, int i
#include<stdio.h>
int main(){
    int a = 12;
    int *ptr1 = &a;
    int* ptr2 = &a;
    int * ptr3 = &a;
    printf("value stored in ptr = %d\n", *ptr1);
    printf("address of the num = %p\n", &a);
    printf("address stored in third pointer = %p\n", ptr3);
    return 0;
}

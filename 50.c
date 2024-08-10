// 50. Write a program to add two distances.
// isko aur complex kiya ja skta hai like adding inches and feet
#include<stdio.h>
struct add{
    int x;
    int y;
};
int main(){
    struct add num;
    num.x = 50;
    num.y = 50;
    printf("sum of the 2 distances = %d\n", num.x+num.y);

    return 0;
}

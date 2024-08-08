// 19. Program to use Switch statement, Display percentage of student
#include<stdio.h>
int main(){
    int sub1, sub2, sub3, sub4, result;
    printf("enter marks of your 4 subjects\n");
    scanf("%d %d %d %d", &sub1, &sub2, &sub3, &sub4);
    result = (sub1+sub2+sub3+sub4)/4;
    switch (result)
    {
    case 1:
        printf("A\n");
        break;

    default:
        break;
    }

    return 0;
}

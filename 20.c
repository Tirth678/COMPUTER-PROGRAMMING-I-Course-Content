// 20. Program to display arithmetic operations using Switch.
#include<stdio.h>
#include<string.h>
int main(){
    int num1, num2,total;
    char a;
    printf("enter any 2 values\n");
    scanf("%d %d", &num1, &num2);
    printf("enter operation\n");
    scanf(" %c", &a);
    switch (a)
    {
    case '+':
        printf("result: %d\n", num1+num2);
        break;
    case '-':
        printf("result: %d\n", num1-num2);
        break;

    case '*':
        printf("reuslt: %d\n", num1*num2);
        break;

    case '/':
        printf("result: %d\n",  num1/num2);
        break;

    default:
        break;
    }

    return 0;
}

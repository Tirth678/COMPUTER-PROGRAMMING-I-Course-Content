// (14) Program to display arithmetic operations using
// Switch.
#include<stdio.h>
int main(){
int num1, num2;
char a;
printf("enter any 2 values\n");
scanf("%d %d", &num1, &num2);
printf("enter a operation\n");
scanf(" %c", &a);
switch(a){
    case '+':
    printf("Summation = %d\n", num1+num2);
    break;
    case '-':
    printf("Subtraction = %d\n", num1-num2);
    break;
    case '*':
    printf("Multiplication = %d\n", num1*num2);
    break;
    case '/':
    printf("Divsion = %d\n", num1/num2);
    break;
    default:
    printf("Invalid operation\n");
    break;
}

    return 0;
}

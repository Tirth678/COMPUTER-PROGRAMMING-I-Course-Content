// 9. Program to find simple interest
#include<stdio.h>
int main(){
int principle, rate, time, result;
printf("enter principle amount\n");
scanf("%d", &principle);
printf("enter rate\n");
scanf("%d", &rate);
printf("enter amount of time\n");
scanf("%d", &time);
result = (principle*rate*time)/3;
printf("your simple interest = %d\n", result);
    return 0;
}

// 17. Program to find that entered year is Leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("enter a year\n");
    scanf("%d", &year);
    if(year%4 == 0 && year%100!= 0 || year%400 == 0){
        printf("The year is a LEAP year\n");
    }
    else{
        printf("The year is NOT a LEAP year\n");
    }

    return 0;
}

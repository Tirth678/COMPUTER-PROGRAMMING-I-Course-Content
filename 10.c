// 10.Program to convert degree centigrade to Fahrenheit.
#include<stdio.h>
int main(){
    int temp, newTemp;
    printf("enter temprature in centigrade\n");
    scanf("%d", &temp);
    newTemp = (temp*1.8)+32;
    printf("temprature in fahrenheit = %d\n", newTemp);

    return 0;
}

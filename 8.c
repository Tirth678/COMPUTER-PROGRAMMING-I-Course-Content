// 8.Program to find area and circumference of the circle
#include<stdio.h>
#define PI 3.14
int main(){
    int radius, area, circumference;
    printf("enter value of radius\n");
    scanf("%d", &radius);
    area = PI*radius*radius;
    circumference = 2*PI*radius;
    printf("area of the cricle = %d\n", area);
    printf("circumference of the circle = %d\n", circumference);

    return 0;
}

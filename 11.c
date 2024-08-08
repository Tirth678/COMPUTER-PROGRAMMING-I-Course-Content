// 11.Program to calculate sum of 5 objects and print average
#include<stdio.h>
int main(){
    int obj1, obj2, obj3, obj4, obj5, avg;
    printf("enter value of 5 objects\n");
    scanf("%d %d %d %d %d", &obj1, &obj2, &obj3, &obj4, &obj5);
    avg = (obj1+obj2+obj3+obj4+obj5)/5;
    printf("Average of 5 objects = %d\n", avg);

    return 0;
}

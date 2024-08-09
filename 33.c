// 33. Program to show table of given number using function.
#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    for(int i=0; i<=10; i++){
        printf("%dx%d = %d\n",num, i, num*(i+0));
    }

    return 0;
}

// 15. Program to find greatest among 3 numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter any 3 values\n");
    scanf("%d %d %d", &a, &b, &c);
    int max = a;
    if(a>b){
        max = a;
    }
    else if(b>c){
        max = b;
    }
    else if(c>a){
        max = c;
    }
    printf("The greatest among the 3 = %d\n", max);

    return 0;
}

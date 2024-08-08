// 16. Repeat program10 with conditional operator.
#include<stdio.h>
int main(){
    int temp, newTemp;
    printf("enter temprature in centigrade\n");
    scanf("%d", &temp);
    newTemp = (temp*1.8)+32;
    printf("temprature in fahrenheit = %d\n", newTemp);
    if(temp>=90){
        printf("it's too hot!\n");
    }
    else if(temp<=20){
        printf("it's too cold!\n");
    }
    else{
        printf("it's moderate!\n");
    }

    return 0;
}

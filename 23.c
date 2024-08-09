// 23. Program to print Fibonacci series till 40
#include<stdio.h>
int fibonacci(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }

}
int main(){
    for(int i=0; i<=40; i++){
        printf("%d\n", fibonacci(i));
    }


    return 0;
}

// 25. Program to find whether a
// given number is prime or not.
#include<stdio.h>
int main(){
    int num;
    printf("enter a value\n");
    scanf("%d", &num);
    if(num%num == 0 && num%2!= 0 || num == 2){
        printf("PRIME\n");
    }
    else{
        printf("NOT PRIME\n");
    }

    return 0;
}

// or else
#include<stdio.h>
#include<stdbool.h>
int main(){
  // is prime logic
  int n;
  printf("enter any value\n");
  scanf("%d", &n);
  bool isPrime = true;
  for(int i=2; i<(n-1); i++){
    if(n%i == 0){
      isPrime = false;
      break;
    }
  }
  if(isPrime){
    printf("prime!!\n");
  }
  else{
    printf("not prime!!\n");
  }

  return 0;
}

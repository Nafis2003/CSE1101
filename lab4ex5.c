#include <stdio.h>

int main(){
    int n,fib0=0,fib1=1,fibN;
    printf("Enter the number of fibonacci numbers to generate : ");
    scanf("%d", &n);

    if (n == 1)
    {
        printf("0");
    }
    else if(n==2){
        printf("0 1");
    }
    else{
        printf("0 1 ");
        for (int i = 3; i <= n;i++){
            fibN = fib1 + fib0;
            fib0 = fib1;
            fib1 = fibN;
            printf("%d ", fibN);
        }
    }
    return 0;
}
#include <stdio.h>

int reverse(int n){
    int rn;
    while(n!=0){
        rn = rn * 10 + n % 10;
        n /= 10;
    }
    return rn;
}

int main()
{
    int n;
    printf("Enter an integer : ");
    scanf("%d", &n);
    printf("Reversed : %d", reverse(n));
    return 0;
}
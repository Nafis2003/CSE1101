#include <stdio.h>

int main(){
    int n,s=0;
    printf("Enter an interger : ");
    scanf("%d", &n);
    while(n!=0){
        s += n % 10;
        n = n / 10;
    }
    printf("Summation of all digits: %d", s);
    return 0;
}
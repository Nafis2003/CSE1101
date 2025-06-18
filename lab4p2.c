#include <stdio.h>

int main(){
    int s=0,n,t;
    printf("How many numbers you want to add : ");
    scanf("%d", &n);
    printf("Enter the numbers : ");
    for (int i = 0; i < n;i++){
        scanf("%d", &t);
        s += t;
    }
    printf("Sum = %d",s);
    return 0;
}
#include <stdio.h>

int main(){
    int n,sum=0, a[100];
    printf("How many numbers you want to add ? ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        sum += a[i];
    }
    printf("Sum = %d",sum);

    return 0;
}
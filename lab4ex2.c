#include <stdio.h>

int main()
{
    int n, rn=0,q,r;
    printf("Enter the number : ");
    scanf("%d", &n);
    q = n;

    while (q!=0){
        r = q % 10;
        rn = rn * 10 + r;
        q /= 10;
    }
    printf("%d is%s a palindrome number\n", n, n == rn ? "" : " not");

    return 0;
}